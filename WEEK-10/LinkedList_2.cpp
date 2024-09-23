#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node() {
            this->next = NULL;
        }
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
        ~Node() {
            cout<<"Default detor is called for "<<this -> data<<endl;
        }
};

void printLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

void insertFront(Node* &head,Node* &tail,int data) {
    if(head == NULL) {
        //empty LL

        //Create a new node
        Node* newNode = new Node(data);
        //update head
        head = newNode;
        tail = newNode;
    }
    else {
        //Create a new node
        Node* newNode = new Node(data);
        // newNode -> data = data;
        //attach a new node to head node
        newNode->next = head;
        //update head node
        head = newNode;
    }
   
}

int getLenth(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}

void deleteNode(Node* &head,Node* &tail,int pos) {
    int len = getLenth(head);
    //Empty list
    if(head == NULL) {
        cout<<"Deletion not possible"<<endl;
    }
    //Single Element
    if(head == tail) {
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL; 
    }
    //At head
    else if(pos == 1) {
        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;      //Detor is called
    }
    //At Tail
    else if(pos == len) {
        Node* temp = head;
        while(temp -> next != tail) {
            temp = temp -> next;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;
    }
    //At middle
    else {
        Node* curr = head;
        Node* prev = NULL;
        while(pos != 1) {
            pos--;
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main() {
    Node *head = NULL;
    Node* tail = NULL;
    insertFront(head,tail,10);
    insertFront(head,tail,20);
    insertFront(head,tail,30);
    printLL(head);

    // deleteNode(head,tail,1);
    // deleteNode(head,tail,3);
    deleteNode(head,tail,2);
    printLL(head);
}