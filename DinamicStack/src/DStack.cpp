#include "../include/DStack.hpp"
#include <iostream>

using namespace std;

DStack::DStack(){
	NodeTop = NULL;
	size = 0;
}

DStack::~DStack(){
	Node * temp;
	while(NodeTop != NULL){
		temp = NodeTop;
		NodeTop = NodeTop -> next;
		delete temp;
	}
}

bool DStack::isFull(){
	Node* newNode;
	try{
		newNode = new Node;
		delete newNode;
		return false;
	}catch(bad_alloc exception){
		return true;
	}
}
bool DStack::isEmpty(){
	return (NodeTop == NULL);
}

void DStack::push(typeItem element){
	if(isFull()){
		cout << "The stack is full"<< endl;
	}else{
		Node* newNode = new Node;
		newNode -> value = element;
		newNode -> next = NodeTop;
		NodeTop = newNode;
		size++;
	}
}

typeItem DStack::pop(){
	if(isEmpty()){
		cout << "Não há elementos para remover"<< endl;
		return 0;
	}else{
		Node* temp = NodeTop;
		typeItem item = temp -> value;
		NodeTop = NodeTop -> next;
		delete temp;
		size--;
		return item;
	}
}
void DStack::print(){
	cout << "    ----Stack----   " << endl;
	Node* temp = NodeTop;
	while(temp != NULL){
		cout << temp -> value << endl;
		temp = temp -> next;
	}
}
int DStack::length(){
	return size;
}