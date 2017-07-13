#define	true //!!AUTH:	archibate@github.com;
true 	true /*!!NOTE:	pyb-is-a-hacker; chmod +x $0; Fc=`dirname $0`; bS=`basename $0`; mF=.mf; MF=$Fc/$mF; echo -e \*\*\* $0 - \(C\) Peng YuBin\\n\\tA simple shell bootstrap for C/C++\\n; if grep -s M=$mF $MF; then if grep -q S=$bS $MF; then true=false; fi; fi; if [ -z $false ]; then true=$true; else echo $MF is going-to-be-reset; true=; fi; if [ -z $true ]; then echo -e "#!/usr/bin/env make -f\\nM=$mF\\nS=$bS" > $MF; sed -n '3,$p' $0 >> $MF; sed -i '/\*\*NO/q' $MF; else echo $MF is up-to-date; fi; exec make -f $mF -C $Fc $*;
pyb-designed : all

options-begin-from-here : #####
OPTIMIZ	:=3
FASTER	+=
LDLIBS	+=m
LIBPATH	+=
INCPATH	+=
##DEBUG-begin
OPTIMIZ	:=0
DBGOPTS	:=gdb stabs+
RUNTOOL	:=#cgdb
##DEBUG-end

USE_GTK	:=#gtk+-2.0
CXXFLAGS+=$(if $(USE_GTK), $(shell pkg-config --cflags --libs $(USE_GTK)))
end-to-here : ##################

DEFINES	+=$(if $(USE_GTK), USE_GTK=$(USE_GTK))
CPPFLAGS+=$(DEFINES:%=-D%) $(INCPATH:%=-I%)
CXXFLAGS+=$(OPTIMIZ:%=-O%) $(FASTER:%=-f%) $(DBGOPTS:%=-g%)
LDFLAGS	+=$(LIBPATH:%=-L%) $(LDLIBS:%=-l%)

SOURCES	+=$S
OBJECTS	+=$(SOURCES:%.cpp=%.o)
ifndef TARGET
TARGET	:=$(PWD)/$M.run
endif

.PHONY : **here** all clean dep undep rstmf

all : $(TARGET)

ifndef NORUN
.PHONY : run
run : $(TARGET)
	$(RUNTOOL) $<
endif

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean :
	rm -rf $(OBJECTS) $(TARGET)

rstmf :
	false=false $(PWD)/$S

dep : undep
	(for x in $(SOURCES); \
		do $(CXX) $(CXXFLAGS) $(CPPFLAGS) -E -M $$x; \
		done) >> $M

undep :
	sed -i '/depedancies/q' $M

.PHONY : **NOTE pyb-designed** */
#undef true

#include <iostream>
#include <string>
#include <string.h>
#define _NEED_FRIEND_OSTREAM
#include "fun.h"
#include "Vec.h"
#include "Ang.h"
#include "Eular.h"
#include "Mat.h"

struct Assertion {
	struct AssertionException {
		AssertionException(std::string str) {
			std::cout << "AssertionException:\t" << str << std::endl;
		}
	};

	const std::string info;
	Assertion(const std::string &info=std::string()): info(info) {}

	template <class T>
	inline void isTrue(T a) {
		if (!a) throw AssertionException(info);
	}
	template <class T>
	inline void isFalse(T a) {
		if (a) throw AssertionException(info);
	}
	template <class T>
	inline void isEqual(T a, T b) {
		isTrue(a==b);
	}
	template <class T>
	inline void notEqual(T a, T b) {
		isTrue(a!=b);
	}
	template <class T>
	inline void almostEqual(T a, T b) {
		isTrue(fabs(a-b)<=M_EPS);
	}
};

#define __TOS(s) #s
#define _TOS(s) __TOS(s)
#define ASSERTION(...) Assertion("Assertion failed at " __FILE__ ":" _TOS(__LINE__) ":" __VA_ARGS__)
int main(int argc, char *argv[])
{
	using namespace math;

	Vec a(1,2,3.6);
	ASSERTION().isEqual(a, Vec(1,2,3.6));
	a+=Vec(0.7,2.1,7.8);
	//ASSERTION().isEqual(a+Vec(3.6,-4,5), Vec(4.3,0.1,16.4));
	ASSERTION().almostEqual<math::real>((a+Vec(1e4,0,0)).x, 1e4+1.7);

	Eular e(math::atan2(1,3),0,0);
	Mat3x3 mat(e);
	Vec v(1,2,3);
	v = mat.trans(v);
	std::cout << v << std::endl;
	ASSERTION().almostEqual<math::real>(v.z, math::sqrt(10));
}
