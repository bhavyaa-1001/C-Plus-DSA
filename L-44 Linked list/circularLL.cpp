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
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    // assuming that the element is present in the list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    // assuming that the value is present in the list
    if(tail == NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }
        // >=2 Node Linked List 
        else if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* tail) {
    if (tail == NULL) {
        return false;
    }
    Node* slow = tail;
    Node* fast = tail->next;

    while (fast != NULL && fast->next != NULL) {
        if (slow == fast) {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

int main(){
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);

    // deleteNode(tail, 3);
    // print(tail);
    isCircularList(tail) ? cout << "Linked List is circular in nature" : cout << "Linked List is not circular in nature";
    return 0;
}