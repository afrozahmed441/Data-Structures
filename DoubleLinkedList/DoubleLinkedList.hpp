#ifndef DOUBLELINKEDLIST_HPP
#define DOUBLELINKEDLIST_HPP

#include <iostream>

using namespace std;

class DoubleLinkedList {
    
    struct node {
        int data;
        struct node *prev;
        struct node *next;
    };

    struct node *head;

public: 
    
    DoubleLinkedList() {
        head = NULL;
    }

    struct node *createNewNode(int data) {
        node *n = new node;
        n->data = data;
        n->prev = NULL;
        n->next = NULL;
     return n;
    }

    void insertAtHead(int data) {
        if(head == NULL) head = createNewNode(data);
        else {
            node *n = createNewNode(data);
            n->next = head;
            head->prev = n;
            head = n;
        }
    }

    void insertAtTail(int data) {
        if(head == NULL) head = createNewNode(data);
        else {
            node *n = createNewNode(data);
            node *temp = head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = n;
            n->prev = temp;
        }
    }

    int deleteAtHead() {
        int deletedNode {-1};
        if(head == NULL) cout << "List is empty";
        if(head->next == NULL) {
            deletedNode = head->data;
            head = NULL;
         return deletedNode;
        }
        else {
            deletedNode = head->data;
            head = head->next;
            head->prev = NULL; 
        }
        return deletedNode;
    }

    int deleteAtTail() {
        int deletedNode {-1};
        if(head == NULL) cout << "List is empty";
        if(head->next == NULL) {
            deletedNode = head->data;
            head = NULL;
          return deletedNode;
        }
        else {
            node *temp = head;
            while(temp->next->next != NULL) temp = temp->next;
            deletedNode = temp->next->data;
            temp->next->prev = NULL;
            temp->next = NULL;
        }
      return deletedNode;
    }
    
    void printList(char mode = 'n') {
        if(head == NULL) cout << "List is empty";
        if(mode == 'n') {
            node *temp = head;
            while(temp->next != NULL) {
                cout << temp->data << "<->";
                temp = temp->next;
            }
            cout << temp->data << endl;
        } if(mode == 'r') {
            node *temp = head;
            while(temp->next != NULL) temp = temp->next;
            while(temp->prev != NULL) {
                cout << temp->data << "<->";
                temp = temp->prev;
            }
            cout << temp->data << endl;
        }
    }


};


#endif //DOUBLELINKEDLIST_HPP