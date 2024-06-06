### Makefile created on 06/05/2024
### By Matheus Henrique dos Santos Lima
### Currently an undergraduate in Information Systems
### Universidade Federal de Minas Gerais

CMD = g++

SRC = ./src
INC = ./include
OBJ = ./build
BIN = ./bin

run: queue.o main.o
	${CMD} ${OBJ}/main.o ${OBJ}/queue.o -o ${BIN}/queue.out

main.o: ${SRC}/main.cpp
	${CMD} ${SRC}/main.cpp -I ${INC}/  -c  -o ${OBJ}/main.o

queue.o: ${SRC}/Queue.cpp
	${CMD} ${SRC}/Queue.cpp -I ${INC}/  -c  -o ${OBJ}/queue.o

clean:
	rm ${OBJ}/*.o
	rm ${BIN}/*.out