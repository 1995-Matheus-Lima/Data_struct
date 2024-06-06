#include <iostream>
#include "../include/Queue.hpp"

using namespace std;


int main(){
    Queue firstQueue;

    typeItem item;

    int op;

    cout << "Queue Generation Program"<< endl;

    do{
        cout << "--- Operations ---" << endl;
        cout << "type 0 to exit" << endl;
        cout << "type 1 to insert an element" << endl;
        cout << "type 2 to remove an element" << endl;
        cout << "type 3 to print the stach elements" << endl;
        cout << "type 4 to get the Queue size:" << endl;
        cout << "Insert the required operation: ";
        cin >> op;

        switch(op){
            case 1:
                cout << "Type the item to insert: ";
                cin >> item;
                firstQueue.push(item);
                break;
            case 2:
                firstQueue.pop();
                break;
            case 3:
                firstQueue.print();
                break;
            case 4:
                cout << "The Queue size is: " <<firstQueue.length()<< endl;
                break;

            default:
                break;
        }
    }while(op != 0);
}