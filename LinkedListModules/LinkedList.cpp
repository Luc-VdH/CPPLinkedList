#include<iostream>
//#include "node.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
}

void LinkedList::addNode(std::string in){
    node *tmp = new node;
    tmp->name = in;
    tmp->next = NULL;
    
    if(head == NULL){
        length = 0;
        head = tmp;
        tail = tmp;
    }else{
        length++;
        tail->next = tmp;
        tail = tail-> next;
    }
}

std::string LinkedList::printNode(int index){
    int count = 0;
    string out = "";
    struct node read = *head;
    
    while (count != index){
        read = *read.next;
        count++;        
    }
    
    out = read.name;
    
    return out;
}

int LinkedList::getLength(){
    return length;
}