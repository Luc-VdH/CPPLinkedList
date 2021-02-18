#include<iostream>
#include "node.h"

using namespace std;

class LinkedList{
    private:
        node *head;
        node *tail;
        int length;
    public:
        LinkedList();
        void addNode(string in);
        string printNode(int index);
        int getLength();        
};