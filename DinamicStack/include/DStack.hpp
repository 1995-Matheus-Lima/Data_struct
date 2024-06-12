#ifndef __DSTACK_
#define __DSTACK_

typedef int typeItem;

struct Node{
  typeItem value;
  Node* next;
  
};

class DStack{
  private:
   Node* NodeTop;
   int size;
  public:
    DStack();
    ~DStack();
    bool isFull();
    bool isEmpty();
    void push(typeItem element);
    typeItem pop();
    void print();
    int length();
};

#endif