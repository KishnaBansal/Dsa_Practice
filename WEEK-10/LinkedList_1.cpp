#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
            // cout<<"Default ctor"<<endl;
            this->next=NULL;
        }
        Node(int data) {
            // cout<<"Parametrized ctor"<<endl;
            this->data=data;
            this->next=NULL;
        }
};

void printLL(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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

void insertAtTail(Node* &head,Node* &tail,int data) {
    if(head==NULL) {
        //empty LL
        //Create a newNode
        Node* newNode = new Node(data);
        //single node hai entire list mai
        head = newNode;
        tail = newNode;
    }
    else {
        //create a newNode
        Node* newNode = new Node(data);
        //update tail and attach
        tail -> next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position) {
    int length = getLenth(head);
    // if(position < 1) {
    //     cout<<"Insertion not possible"<<endl;
    //     return;
    // }
    if(position <= 1) {
        insertFront(head,tail,data);
    }
    else if(position > length) {
        insertAtTail(head,tail,data);
    }
    else {
        //insert at middle of the list
        Node* newNode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1) { 
            position--;    //(curr != position) ???
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = newNode;
        newNode -> next = curr;
    }
}

// int main() {
    
//     //Creation of node
    
//     // //Static Memory allocation
//     // Node a;

//     // //Dynamic Memory Allocation
//     // Node *head = new Node();

//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first -> next = second;
//     second -> next = third;
//     third -> next = fourth;
//     fourth -> next = fifth;

//     Node* head = first;
//     Node* tail = fifth;
//     printLL(head);
//     int cnt = getLenth(head);
//     cout<<"No. of nodes are: "<<cnt<<endl;

//     // insertFront(head,5);
//     // printLL(head);

//     insertAtTail(head,tail,500);
//     printLL(head);


//     return 0;
// }

int main() {
    Node *head = NULL;
    Node* tail = NULL;
    insertFront(head,tail,10);
    insertFront(head,tail,20);
    insertFront(head,tail,30);
    insertAtTail(head,tail,50);
    printLL(head);

    insertAtPosition(head,tail,15,5);
    printLL(head);

}