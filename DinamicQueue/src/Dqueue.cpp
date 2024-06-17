#include "../include/Dqueue.hpp"
#include <iostream>

using namespace std;

Dqueue::Dqueue(){
	first = NULL;
	last = NULL;
	size = 0;
}

Dqueue::~Dqueue(){
	Node * temp;
	while(first != NULL){
		temp = first;
		first = first -> next;
		delete temp;
	}
}

bool Dqueue::isFull(){
	Node* newNode;
	try{
		newNode = new Node;
		delete newNode;
		return false;
	}catch(bad_alloc exception){
		return true;
	}
}
bool Dqueue::isEmpty(){
	return (first == NULL);
}

void Dqueue::push(typeItem element){
	if(isFull()){
		cout << "The stack is full"<< endl;
	}else if(isEmpty()){
		Node* newNode = new Node;
		newNode -> value = element;
		first = newNode;
		last = newNode;
		size++;
	}else{
		Node* newNode = new Node;
		newNode -> value = element;
		last -> next = newNode;
		last = newNode;
		size++;
	}
}

typeItem Dqueue::pop(){
	if(isEmpty()){
		cout << "there is no elements  in the queue to remove"<< endl;
		return 0;
	}else{
		Node* temp = first;
		typeItem item = temp -> value;
		first = first -> next;
		delete temp;
		size--;
		return item;
	}
}
void Dqueue::print(){
	cout << "    ----Stack----   " << endl;
	Node* temp = first;
	while(temp != NULL){
		cout << temp -> value << endl;
		temp = temp -> next;
	}
}
int Dqueue::length(){
	return size;
}