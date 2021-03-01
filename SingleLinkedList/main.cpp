#include <iostream>
#include "SingleLinkedList.hpp"

int main(){
    SingleLinkedList list1;
    int choice;
    while(1){
        cout << "Enter your Choice: " << endl << "1. insert a node at head" << endl  << "2. delete a node at head"  << endl << "3. print all nodes in the List" << endl <<"4. Exit" << endl << " : ";
        cin >> choice;
        switch(choice) {
            case 1:
                int node;
                cout << "Enter the node: ";
                cin >> node;
                list1.insertAtHead(node);
                cout << "-------------------------- Successfully Inserted ----------------------------------" << endl;
                break;
            case 2 :
                int del;
                del = list1.deleteAtHead();
                cout << "Deleted node is: " << del << endl;
                cout << "------------------------- Successfully Deleted ------------------------------------" << endl;
                break;
            case 3:
                cout << "------------------------- Printing list ----------------------------------------------" << endl;
                list1.printList();
                break;
            case 4:
                exit(0);
                break;
            default: 
                cout << "NOT A VALID CHOICE" << endl;
        }
    }
 return 0;   
}