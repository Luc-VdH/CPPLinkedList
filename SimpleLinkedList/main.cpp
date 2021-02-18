#include<iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    
    struct LinkedList *root = NULL;
    struct LinkedList *tail = NULL;
    
    string in = "in";
    int num = 0;
    
    cout << "Enter names of people, q to stop" << endl;
    while(in[0] != 'q'){
        cin >> in;
        LinkedList *tmp = new LinkedList;
        tmp->nme = in;
        tmp->next = NULL;
        
        if(root == NULL){
            root = tmp;
            tail = tmp;
        }else{
            tail->next = tmp;
            tail = tail->next;
        }
        
        num++;
    }

    cout << "The names are:" << endl;
//    cout << "num = " << num << endl;
    
    struct LinkedList read  = *root;
//    cout << "name 1: " << read.nme << endl;
    for(int i = 0; i < num-1; i++){
        cout << read.nme << endl;
        read = *read.next;        
    }
    
    return 0;
}
