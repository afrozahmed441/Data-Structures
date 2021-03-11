#include <iostream> 
#include "DoubleLinkedList.hpp"

using namespace std;

int main() {
    DoubleLinkedList list1;
    int choice;
    while(1){
        cout << "Enter your Choice: " << endl << "1. insert a node at head" << endl  << "2. delete a node at head"  << endl << "3. insert a node at tail" << endl <<"4. delete a node at tail" << endl << "5. print list nodes" << endl << "6. Exit"<< endl << " : ";
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
                int n;
                cout << "Enter the node: ";
                cin >> n;
                list1.insertAtTail(n);
                cout << "-------------------------- Successfully Inserted ----------------------------------" << endl;
                break;
            case 4:
                int d;
                d = list1.deleteAtTail();
                cout << "Deleted node is: " << d << endl;
                cout << "------------------------- Successfully Deleted ------------------------------------" << endl;
                break;
            case 5:
                cout << "------------------------- Printing list ----------------------------------------------" << endl;
                char mode;
                cout << "Enter the mode of printing 'n' for normal and 'r' for reverse: ";
                cin >> mode;
                list1.printList(mode);
                break;
            case 6:
                exit(0);
                break;
            default: 
                cout << "NOT A VALID CHOICE" << endl;
        }
    }
 return 0;
}