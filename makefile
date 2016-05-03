
.PHONY: all

all: part1 part2 part3

part1:
	cd Part1 && make

part2:
	cd Part2 && make

part3:
	cd Part3 && make

handin.zip: makefile Part*/main.cpp Part*/makefile Part*/operators.hpp
	zip $@ $^
