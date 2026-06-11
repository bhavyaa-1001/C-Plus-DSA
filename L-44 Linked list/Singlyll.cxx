#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
};

void insertAtTail(Node* &head, int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        return;
    }
    Node* temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
};

void insertAtPosition(Node* &tail, Node* &head, int position , int d){
    
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;

    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(head, d);
        return;
    }

    Node* NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
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
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* tail = third;

    head->next = second;
    second->next = third;
    third->next = NULL;

    print(head);

    insertAtHead(head, 5);
    print(head);
    insertAtTail(head, 40);
    print(head);
    insertAtPosition(tail, head, 3, 15);
    print(head);


    return 0;
}
