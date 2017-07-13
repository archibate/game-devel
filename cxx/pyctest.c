#define	true //!!AUTH:	archibate@github.com;
true 	true /*!!NOTE:	pyb-is-a-hacker; chmod +x $0; Fc=`dirname $0`; mF=.mf; MF=$Fc/$mF; echo -e M=$mF\\nS=`basename $0` > $MF; sed -n '3,$p' $0 >> $MF; sed -i '/\*\*NO/q' $MF; exec make -f $mF -C $Fc $*;
pyb-designed : all

options-begin-from-here : #####
OPTIMIZ	:=#3
FASTER	+=pic
PYTHOM	:=python2.7#3.6m
LDLIBS	+=$(PYTHOM)
LIBPATH	+=/usr/bin
INCPATH	+=/usr/include/$(PYTHOM)
LDFLAGS	+=-shared
TARGET	:=$(PWD)/pyctest.so
NORUN	:=true

USE_GTK	:=#gtk+-2.0
CXXFLAGS+=$(if $(USE_GTK), $(shell pkg-config --cflags --libs $(USE_GTK)))
end-to-here : ##################

DEFINES	+=$(if $(USE_GTK), USE_GTK=$(USE_GTK))
CPPFLAGS+=$(DEFINES:%=-D%) $(INCPATH:%=-I%)
CXXFLAGS+=$(USE_OPT:%=-O%) $(FASTER:%=-f%)
LDFLAGS	+=$(LIBPATH:%=-L%) $(LDLIBS:%=-l%)

SOURCES	+=$S
OBJECTS	+=$(SOURCES:%.c=%.o)
ifndef TARGET
TARGET	:=$(PWD)/$M.run
endif

.PHONY : **here** all clean dep undep

all : $(TARGET)

ifndef NORUN
.PHONY : run
run : $(TARGET)
	$<
endif

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean :
	rm -rf $(OBJECTS) $(TARGET)

dep : undep
	(for x in $(SOURCES); \
		do $(CXX) $(CXXFLAGS) $(CPPFLAGS) -E -M $$x; \
		done) >> $M

undep :
	sed -i '/depedancies/q' $M

.PHONY : **NOTE pyb-designed** */
#undef true
#include <Python.h>

static PyObject *printstr(PyObject *self, PyObject *args)
{
	char *str = NULL;
	if (!PyArg_ParseTuple(args, "s", &str))
		return NULL;
	printf("%s\n", str);
	return Py_BuildValue("s", "hello");
}

static struct PyMethodDef pyctest_methods[] = {
	{"printstr", printstr, METH_VARARGS},
	{NULL, NULL}};

void initpyctest()
{
	(void) Py_InitModule("pyctest", pyctest_methods);
}
