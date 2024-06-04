#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node() {
            this -> prev = NULL;
            this -> next = NULL;
        }
        Node(int data) {
            this -> data = data;
            this -> prev = NULL;
            this -> next = NULL;
        }
};

void printLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}

int findLength(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}

void insertFront(Node* &head,Node* &tail,int data) {
    //LL is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        //LL is not empty
        Node* newNode = new Node(data);
        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }
}

void insertTail(Node* &head,Node* &tail,int data) {
    //LL is empty
    if(tail == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        //LL is not empty
        Node* newNode = new Node(data);
        newNode -> prev = tail;
        tail -> next = newNode;
        tail = newNode;
    }
}

void insertAtPos(Node* &head,Node* &tail,int data,int pos) {
    int len = findLength(head);
    //LL is empty
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else {
        if(pos == 1) {
            insertFront(head,tail,data);
        }
        // int len = findLength(head);
        else if(pos == len+1) {
            insertTail(head,tail,data);
        }
        else {
            Node* newNode = new Node(data);
            Node* prevNode = NULL;
            Node* currNode = head;
            while(pos != 1) {
                pos--;
                prevNode = currNode;
                currNode = currNode -> next;
            }
            prevNode -> next = newNode;
            newNode -> prev = prevNode;
            newNode -> next = currNode;
            currNode -> prev = newNode;
        }
    }
}

void deleteHead(Node* &head,Node* &tail) {
    Node* temp = head;
    head = head -> next;
    temp -> next = NULL;
    head -> prev = NULL;
    delete temp;
}

void deleteTail(Node* &head,Node* &tail) {
    Node* prevNode = head;
    while(prevNode -> next != tail) {
        prevNode = prevNode -> next;
    }
    prevNode -> next = NULL;
    tail -> prev = NULL;
    delete tail;
    tail = prevNode;
}

void deleteNode(Node* &head,Node* &tail,int pos) {
    int len = findLength(head);
    //List is empty
    if(head == NULL) {
        cout<<"Deletion not possible"<<endl;
    }
    //Single Node
    else if(head == tail) {
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    //At Head
    else if(pos == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete temp;
    }
    //At Tail
    else if(pos == len) {
        Node* prevNode = head;
        while(prevNode -> next != tail) {
            prevNode = prevNode -> next;
        }
        prevNode -> next = NULL;
        tail -> prev = NULL;
        delete tail;
        tail = prevNode;
    }
    else {
        Node* prevNode = NULL;
        Node* currNode = head;
        // Node* nextNode = currNode->next;
        // while(pos != 1) {
        //     pos--;
        //     prevNode = currNode;
        //     currNode = currNode -> next;
        //     nextNode = currNode -> next;
        // }
        while(pos != 1) {
            pos--;
            prevNode = currNode;
            currNode = currNode -> next;
        }
        Node* nextNode = currNode->next;
        prevNode -> next = nextNode;
        currNode -> prev = NULL;
        currNode -> next = NULL;
        nextNode -> prev = prevNode;
        delete(currNode);
    }

}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertFront(head,tail,40);
    insertFront(head,tail,30);
    insertFront(head,tail,20);
    insertFront(head,tail,10);
    printLL(head);

    insertTail(head,tail,50);
    printLL(head);

    insertAtPos(head,tail,25,4);
    printLL(head);

    // deleteHead(head,tail);
    // printLL(head);

    // deleteTail(head,tail);
    // printLL(head);

    deleteNode(head,tail,5);
    printLL(head);
}