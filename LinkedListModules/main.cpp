#include<iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList names;
    string input = "in";
    
    
    cout << "Enter Names, q to quit:" << endl;
    while(input[0] != 'q'){
        cin >> input;
        names.addNode(input);
    }
    
    cout << "The names entered are:"  << endl;
    
    for(int i = 0; i < names.getLength(); i++){
        cout << names.printNode(i) << endl;
    }
    
    
    
    return 0;
}