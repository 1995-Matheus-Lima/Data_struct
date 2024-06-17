#ifndef __DQueue_
#define __DQueue_

typedef int typeItem;

struct Node{
  typeItem value;
  Node* next;
  
};

class Dqueue{
  private:
   Node* first;
   Node* last;
   int size;
  public:
    Dqueue();
    ~Dqueue();
    bool isFull();
    bool isEmpty();
    void push(typeItem element);
    typeItem pop();
    void print();
    int length();
};

#endif