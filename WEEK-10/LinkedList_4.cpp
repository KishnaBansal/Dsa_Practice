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
            this -> data = data;
            this->next = NULL;
        }
};

void printLL(Node* head) {
    Node* t = head;
    while(t != NULL) {
        cout<<t->data<<" -> ";
        t = t -> next;
    }
    cout<<"NULL"<<endl;
}

void insertFront(Node* &head,Node*&tail,int data) {
    if(head == NULL) {
        //empty LL

        //Create a new node
        Node* newNode = new Node(data);
        //update head
        head = newNode;
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

bool cycle_check_slow_fast(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
            slow = slow -> next;
            if(fast == slow) {
                return true;
            }
        }
    }
    return false;
}

Node* getStartingPointOfLoop(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
            slow = slow -> next;
            // if(fast == slow) {
            //     break;
            // }
        }
        if(fast == slow) {
            break;
        }
    }
    //We reached here that means fast and slow met at same point
    slow = head;
    while(fast != slow) {
        fast = fast -> next;
        slow = slow -> next;
    }
    return fast;
}

void removeLoop(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
            slow = slow -> next;
            if(fast == slow) {
                break;
            }
        }
    }
    //We reached here that means fast and slow met at same point
    slow = head;
    while(fast != slow) {
        fast = fast -> next;
        slow = slow -> next;
    }
    Node* startPoint = slow;
    Node* temp = fast;
    while(temp -> next != startPoint) {
        temp = temp -> next;
    }
    temp -> next = NULL;
}

Node* reverseLL(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* nextNode = curr -> next;
        prev = curr;
        curr = curr -> next;
        curr = nextNode;
    }
    return prev;
}

void addOne(Node* &head) {
    //reverse
    head = reverseLL(head);

    //add 1
    int carry = 1;
    Node* temp = head;
    while(temp -> next != NULL) {
        int totalSum = temp -> data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;
        temp -> data = digit;
        temp = temp -> next;

        if(carry == 0) {
            break;
        }
    }

    //Processing last Node
    if(carry != 0) {
        int totalSum = temp -> data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;
        temp -> data = digit;

        if(carry != 0) {
            Node* newNode = new Node(carry);
            temp -> next = newNode;
        }
    }

    //reverse
    head = reverseLL(head);

    //print
    temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertFront(head,tail,9);
    insertFront(head,tail,9);
    insertFront(head,tail,9);
    // insertFront(head,tail,90);
    // insertFront(head,tail,77);
    // tail -> next = head -> next;
    // // printLL(head);

    // // bool finalAns = cycle_check_slow_fast(head);
    // // if(finalAns) {cout<<"Yes\n";}
    // // else {cout<<"No\n";}

    // cout << getStartingPointOfLoop(head) -> data << endl;

    // reverseLL(head);
    printLL(head);
    addOne(head);                      
    // printLL(head);
}