#ifndef SINGLELINKEDLIST_HPP
#define SINGLELINKEDLIST_HPP
#include <algorithm>
#include <vector>

using namespace std;

class SingleLinkedList
{
    struct node {
        int data;
        struct node *next;
    };
    
    node *head;
    
public:

    SingleLinkedList() {
        head = NULL;
    }
    
    /** Create a new node; Method*/
    node *newNode(int val) {
        node *n = new node;
        n->data  = val;
        n->next = NULL;
     return n;
    }
    
    /** Insertion at head node; Method*/
    void insertAtHead(int val) {
        if(head == NULL) head = newNode(val);
        else {
            node *n = newNode(val);
            n->next = head;
            head = n;
        }
    }
    
    /** Insertion at tail node; Method*/
    void insertAtTail(int val){
        if(head == NULL) head = newNode(val);
        else {
            node *temp = head;
            while(temp->next != NULL) temp = temp->next;
            temp->next = newNode(val);
        }
    }
    
    /** Delete at head node; Method */
    /** returns the deleted element if list is not empty, else -1 if list is empty*/
    int deleteAtHead() {
        int deletedNode {-1};
        if(head == NULL) cout << "List is Empty" << endl;
        else {
            deletedNode = head->data;
            head = head->next;
        }
      return deletedNode;
    }
    
    /** Delete at tail node; Method*/
    int deleteAtTail() {
        int deletedNode {-1};
        if(head == NULL) cout << "List is Empty" << endl;
        else {
            node *temp = head;
            while(temp->next->next != NULL) temp = temp->next;
            deletedNode = temp->next->data;
            temp->next = NULL;
        }
        return deletedNode;
    }
    
    /** Find a node in the List, First Occurance in the list; Method*/
    int findNode(int val) {
        if(head == NULL) return  -1;
        else {
            printList();
            node *temp = head;
            while(temp->next != NULL && temp->data != val)  {
                cout << "   ";
                temp = temp->next;
            }
            if(temp->data == val){
                cout << "^" << endl;
                return val;
            }
        return -1;
        }
    }
    
    /** Remove duplicate values in the List; Method*/
    void removeDuplicate() {
        if(head == NULL) cout << "List is Empty" << endl;
        else if(head->next == NULL) cout << "Only one node in List" << endl;
        else {
            vector <int> list;
            node *cur = head;
            node *prev = NULL;
            while(cur != NULL) {
                if(find(list.begin(), list.end(), cur->data) != list.end()){
                    prev->next = cur->next;
                }
                else {
                    list.push_back(cur->data);
                    prev = cur;
                }
                cur = cur->next;
            }
        }
    }
    
    /** Print  Method*/
    void printList() {
        if(head == NULL) cout << "List is Empty" << endl;
        else {
            node *temp = head;
            while(temp->next != NULL) {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << temp->data << endl;
        }
    }
 

};

#endif // SINGLELINKEDLIST_HPP
