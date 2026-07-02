#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(5);
    Node* second = new Node(18);
    Node* third = new Node(65);
    Node* tail = third;
 
    head->next = second;
    second->next = third;
    third->next = NULL;

    print(head);
}