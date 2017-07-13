#
# - Makefile
#
#   Makefile for my Ray Tracer
#

USE_OPT	:=2

DEFINES	:=
CPPFLAGS:=$(DEFINES:%=-D%)
OGLFLAGS:=-lGL -lGLU -lglut
CFLAGS	:=-O$(USE_OPT) -ffast-math $(OGLFLAGS)
LDFLAGS	:=-lm

SOURCES	+=gl2test.c
OBJECTS	+=$(SOURCES:%.cc=%.o)
TARGET	:=bin/test

.PHONY : all clean dep undep

test : $(TARGET)
	$<

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean :
	rm -rf $(OBJECTS) $(TARGET)

dep : undep
	(for x in $(SOURCES); \
		do $(CC) $(CFLAGS) $(CPPFLAGS) -E -M $$x; \
		done) >> Makefile

undep :
	sed -i '/depedancies are below/q' Makefile
