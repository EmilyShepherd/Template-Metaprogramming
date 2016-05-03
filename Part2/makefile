
GCC=g++

.PHONY: all clean

all: a.out

a.out: main.cpp operators.hpp
	$(GCC) $< -I.

clean:
	rm a.out
