all: derle program calistir

derle:
	g++ -I ./ -o ./blowfish.o -c ./blowfish.cpp
program:
	g++ -I ./ -o ./test ./blowfish.o ./test.cpp
calistir:
	./test