### Makefile created on 17/06/2024
### By Matheus Henrique dos Santos Lima
### Currently an undergraduate in Information Systems
### Universidade Federal de Minas Gerais

CMD = g++

SRC = ./src
INC = ./include
OBJ = ./build
BIN = ./bin

run: queue.o main.o
	${CMD} ${OBJ}/main.o ${OBJ}/Dqueue.o -o ${BIN}/dqueue.out

main.o: ${SRC}/main.cpp
	${CMD} ${SRC}/main.cpp -I ${INC}/  -c  -o ${OBJ}/main.o

queue.o: ${SRC}/Dqueue.cpp
	${CMD} ${SRC}/Dqueue.cpp -I ${INC}/  -c  -o ${OBJ}/Dqueue.o

clean:
	rm ${OBJ}/*.o
	rm ${BIN}/*.out
