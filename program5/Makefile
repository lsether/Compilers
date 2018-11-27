#############
# Makefile
# COSC 4785
# Loren Sether
# Program 5
##############
CC=gcc
CXX=g++
CFLAGS=-ggdb -Wall
# No flex flags, turned all on with %option in the lpp file.
LEX=flex++
LIB=
YACC=bison
# -W is warnings, -t set up for debugging, --report is information on the
#  states. The -d is not needed if "%defines" is in the .y file.
YFLAGS=-W -t --report=state

.PHONY: clean tidy tarball

tester: program5_lex.cpp program5_tab.cpp program5.cpp program5.hpp
	$(CXX) $(CFLAGS) program5_lex.cpp program5_tab.cpp program5.cpp -o tester 


# basic_tab.hpp is generate from basic.y and used by basci.lpp
# basic.hpp contains the node definitions. 
program5_lex.cpp: program5.lpp program5.hpp program5_tab.hpp
	$(LEX) -o $@ $<

program5_tab.cpp program5_tab.hpp: program5.y program5.hpp
	$(YACC) $(YFLAGS) $<

tidy: 
	/bin/rm -f  *.o *_tab.** *_lex.cpp 

clean: tidy
	/bin/rm -f a.out tester *.output
