### Makefile created on 06/05/2024
### By Matheus Henrique dos Santos Lima
### Currently an undergraduate in Information Systems
### Universidade Federal de Minas Gerais

CMD = g++

SRC = ./src
INC = ./include
OBJ = ./build
BIN = ./bin

run: stack.o main.o
	${CMD} ${OBJ}/main.o ${OBJ}/stack.o -o ${BIN}/stack.out

main.o: ${SRC}/main.cpp
	${CMD} ${SRC}/main.cpp -I ${INC}/  -c  -o ${OBJ}/main.o

stack.o: ${SRC}/Stack.cpp
	${CMD} ${SRC}/Stack.cpp -I ${INC}/  -c  -o ${OBJ}/stack.o

clean:
	rm ${OBJ}/*.o
	rm ${BIN}/*.out