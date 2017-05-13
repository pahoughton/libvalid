# 2017-05-09 (cc) <paul4hough@gmail.com>
#

check_PROGRAMS = unit
unit_CPPFLAGS=-I ../../cxx
unit_SOURCES =		\
	main.cpp	\
	v_verify01.cpp

valid/verify.hpp:
	ln -s ../../cxx/valid

.PHONY: test
test: unit
	./unit

dbg: unit
	echo libtool --mode=execute gdb unit
