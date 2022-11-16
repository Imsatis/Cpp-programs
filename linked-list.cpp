#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    
    node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

    void insertAtTail(node* &head, int data) {
        node* temp = head;
        node* n = new node(data);
        if(!head) {
            head = n;
            return;
        }
        
        while(temp->next) {
            temp = temp->next;
        }
        
        temp->next = n;
        return;
    }
    
    void insertAtHead(node* &head, int val) {
        node* n = new node(val);
        n->next = head;
        head = n;
        return;
    }
    
    void show(node* head) {
        node* temp = head;
        
        while(temp) {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        
        cout<<"NUll"<<endl;
        return;
    }

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    show(head);
    insertAtHead(head, 0);
    show(head);
    return 0;
}
