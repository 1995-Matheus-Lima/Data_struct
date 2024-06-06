#ifndef __Queue_
#define __Queue_

typedef int typeItem;
const int max_items = 100;

class Queue{
  private:
    int first,last;
    typeItem* structQueue;
  public:
    Queue();
    ~Queue();
    bool isFull();
    bool isEmpty();
    void push(typeItem element);
    typeItem pop();
    void print();
    int length();
};

#endif