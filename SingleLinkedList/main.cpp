#include <iostream>
#include "SingleLinkedList.hpp"

int main(){
    SingleLinkedList list1;
    int choice;
    while(1){
        cout << "Enter your Choice: " << endl << "1. insert a node at head" << endl  << "2. delete a node at head"  << endl << "3. insert a node at tail" << endl <<"4. delete a node at tail" << endl << "5. Search for a node " <<endl <<"6. Remove Duplicate nodes from List" <<endl  << "7. print list nodes" << endl << "8. Exit"<< endl << " : ";
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
                int searchNode, sn;
                cout << "Enter the node to search: ";
                cin >> searchNode;
                sn = list1.findNode(searchNode);
                if(sn != -1) cout << "--------------------------- Node Found -----------------------------" << endl;
                else cout << endl << "---------------------- Node not Found -------------------------------------" << endl;
                break;
            case 6:
                list1.removeDuplicate();
                cout << "List: ";
                list1.printList();
                cout << "--------------------------------- Successfully removed Duplicate nodes -------------------------------- " << endl;
                break;
            case 7:
                cout << "------------------------- Printing list ----------------------------------------------" << endl;
                list1.printList();
                break;
            case 8:
                exit(0);
                break;
            default: 
                cout << "NOT A VALID CHOICE" << endl;
        }
    }
 return 0;   
}