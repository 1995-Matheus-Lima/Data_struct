#include "../include/Stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack(){
	size = 0;
	structStack = new typeItem;
}

Stack::~Stack(){
	delete [] structStack;
}

bool Stack::isFull(){
	return (size == max_items);
}

bool Stack::isEmpty(){
	return (size == 0);
}

void Stack::push(typeItem element){
	if(isFull()){
		cout << "The Stack is Full, it's impossible to add another element" << endl;
	}
	else{
		structStack[size] = element;
		size++;
		}
	}

typeItem Stack::pop(){
	if(isEmpty()){
		cout << "The Stack is EMPTY, there is no element to remove"<< endl;
		return 0;
	}
	else{
		size--;
		return structStack[size];
	}
}

void Stack::print(){
	cout << "----- Stack -----" << endl;
	if(isEmpty()){
			cout << "There is no elements to print" << endl;
	}
	else{for(int i = size-1; i >= 0 ; i--){
			cout << structStack[i] << endl;
		}
	}
}

int Stack::length(){
	return size;
}


