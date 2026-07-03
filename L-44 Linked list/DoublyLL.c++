#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}

void insertAtPosition(Node* &tail, Node* &head, int position , int d){
    
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;

    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(head,tail, d);
        return;
    }

    Node* NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    NodeToInsert->prev = temp;
    temp->next = NodeToInsert;
    temp->next->prev = NodeToInsert;
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* &head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){
    Node* head = NULL;
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    Node* tail = NULL;

    // head->next = second;
    // second->prev = head;
    // second->next = third;
    // third->prev = second;

    print(head);
    cout << "Length of linked list is: " << getLength(head) << endl;

    insertAtHead(head ,tail,90);
    print(head);

    insertAtTail(head,tail,100);
    print(head);

    insertAtPosition(tail, head, 2, 101);
    print(head);

    return 0;
}