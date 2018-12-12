#############
# Makefile
# COSC 4785
# Loren Sether
# Program 6
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

tester: program6_lex.cpp program6_tab.cpp program6.cpp program6.hpp
	$(CXX) $(CFLAGS) program6_lex.cpp program6_tab.cpp program6.cpp -o tester 


# basic_tab.hpp is generate from basic.y and used by basci.lpp
# basic.hpp contains the node definitions. 
program6_lex.cpp: program6.lpp program6.hpp program6_tab.hpp
	$(LEX) -o $@ $<

program6_tab.cpp program6_tab.hpp: program6.y program6.hpp
	$(YACC) $(YFLAGS) $<

tidy: 
	/bin/rm -f  *.o *_tab.** *_lex.cpp 

clean: tidy
	/bin/rm -f a.out tester *.output
