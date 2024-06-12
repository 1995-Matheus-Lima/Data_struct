### Makefile created on 12/06/2024
### By Matheus Henrique dos Santos Lima
### Currently an undergraduate in Information Systems
### Universidade Federal de Minas Gerais

CMD = g++

SRC = ./src
INC = ./include
OBJ = ./build
BIN = ./bin

run: stack.o main.o
	${CMD} ${OBJ}/main.o ${OBJ}/Dstack.o -o ${BIN}/dstack.out

main.o: ${SRC}/main.cpp
	${CMD} ${SRC}/main.cpp -I ${INC}/  -c  -o ${OBJ}/main.o

stack.o: ${SRC}/DStack.cpp
	${CMD} ${SRC}/DStack.cpp -I ${INC}/  -c  -o ${OBJ}/Dstack.o

clean:
	rm ${OBJ}/*.o
	rm ${BIN}/*.out
