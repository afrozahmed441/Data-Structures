#ifndef SINGLELINKEDLIST_HPP
#define SINGLELINKEDLIST_HPP

using std::cout;
using std::cin;
using std::endl;

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
