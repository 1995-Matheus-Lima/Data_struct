#include "../include/Queue.hpp"
#include <iostream>

using namespace std;

Queue::Queue(){
	first = 0;
	last = 0;
	structQueue = new typeItem;
}

Queue::~Queue(){
	delete [] structQueue;
}

bool Queue::isFull(){
	return ((last-first) == (max_items-1));
}

bool Queue::isEmpty(){
	return (first == last);
}

void Queue::push(typeItem element){
	if(isFull()){
		cout << "The Queue is Full, it's impossible to add another element" << endl;
	}
	else{
		structQueue[(last%max_items)] = element;
		last++;
	}
}

typeItem Queue::pop(){
	if(isEmpty()){
		cout << "The Queue is EMPTY, there is no element to remove"<< endl;
		return 0;
	}
	else{
		first++;
		return structQueue[first%5];
	}
}

void Queue::print(){
	cout << "----- Queue -----" << endl;
	if(isEmpty()){
			cout << "There is no elements to print" << endl;
	}
	else{for(int i = first; i < last ; i++){
			cout << structQueue[i%5] << endl;
		}
	}
}

int Queue::length(){
	return (last-first);
}


