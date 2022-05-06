#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;


    node(int val){
        data = val;
        next = NULL;
    }
};

void Insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp ->next;
    }

    temp -> next = n;
}

void display(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp ->data << " ";
        temp = temp ->next;
    }   
}

void insertathead(node* &head, int val){
    node* temp = new node(val);
    temp-> next = head;
    head = temp;
}

int main() {
    node* head(0);
    Insert(head, 1);
    Insert(head, 2);
    Insert(head, 3);

    insertathead(head, 4);

    display(head);

    return 0;
}