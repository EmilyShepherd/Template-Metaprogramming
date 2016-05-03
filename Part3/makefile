
GCC=g++

.PHONY: all clean

all: a.out

a.out: main.cpp operators.hpp
	$(GCC) -std=c++11 $< -I.

clean:
	rm a.out
