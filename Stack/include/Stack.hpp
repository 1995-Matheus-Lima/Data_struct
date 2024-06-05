#ifndef __STACK_
#define __STACK_

typedef int typeItem;
const int max_items = 100;

class Stack{
  private:
    int size;
    typeItem* structStack;
  public:
    Stack();
    ~Stack();
    bool isFull();
    bool isEmpty();
    void push(typeItem element);
    typeItem pop();
    void print();
    int length();
};

#endif