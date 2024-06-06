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
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

void insertFront(Node* &head,int data) {
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

Node* revRecursion(Node* prev,Node* curr) {
    if(curr == NULL) {
        return prev;
    }
    Node* nextNode = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = nextNode;
    Node* recAns = revRecursion(prev,curr);
    return recAns;
}

// int middleNode(Node* head) {
//     int n = getLenth(head);
//     int pos = (n/2)+1;      //Taking index from 1 not 0
//     // int currPos = 1;
//     // Node* temp = head;
//     // while(currPos != pos) {
//     //     currPos++;
//     //     temp = temp -> next;
//     // }
//     // return temp -> data;

//     Node* temp = head;
//     while(pos != 1) {
//         pos--;
//         temp = temp -> next;
//     }
//     return temp -> data;
// }

int middleNode_Slow_Fast_Approach(Node* head) {
    Node* slow = head;
    Node* fast = head;
    // If there are six elements and ans is 3th one
    // while(fast -> next != NULL) {
    //     fast = fast -> next;
    //     if(fast -> next != NULL) {
    //         fast = fast -> next;
    //         //Fast has moved two steps that means slow can now move one step
    //         slow = slow -> next;
    //     }
    // }
    // return slow -> data;

    // If there are six elements and ans is 4th one
    // while(fast != NULL) {
    //     fast = fast -> next;
    //     if(fast != NULL) {
    //         fast = fast -> next;
    //         //Fast has moved two steps that means slow can now move one step
    //         slow = slow -> next;
    //     }
    // }
    // return slow -> data;

}

int main() {
    Node* head = NULL;
    Node* prev = NULL;
    insertFront(head,10);
    insertFront(head,20);
    insertFront(head,30);
    insertFront(head,40);
    insertFront(head,50);
    insertFront(head,60);
    printLL(head);

    // Node* curr = head;

    // // while(curr != NULL) {
    // //     Node* nextNode = curr -> next;
    // //     curr -> next = prev;
    // //     prev = curr;
    // //     curr = nextNode;
    // //     // nextNode = nextNode -> next;
    // // }

    // head = revRecursion(prev,curr);
    // printLL(head);

    // cout<<middleNode(head)<<"\n";

    cout<<middleNode_Slow_Fast_Approach(head)<<endl;




}


// //Palindrome of Linked List
// class Solution {
// public:
//     ListNode* middleNode_Slow_Fast_Approach(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast -> next != NULL) {
//             fast = fast -> next;
//             if(fast -> next != NULL) {
//                 fast = fast -> next;
//                 slow = slow -> next;
//             }
//         }
//         return slow;
//     }
//     ListNode* revRecursion(ListNode* prev,ListNode* curr) {
//         if(curr == NULL) {
//             return prev;
//         }
//         ListNode* nextNode = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = nextNode;
//         ListNode* recAns = revRecursion(prev,curr);
//         return recAns;
//     }
//     bool compareList(ListNode* head,ListNode* head2) {
//         ListNode* temp1 = head;
//         ListNode* temp2 = head2;
//         while(temp1 != NULL && temp2 != NULL) {
//             if(temp1 -> val != temp2 -> val) {
//                 return false;
//             }
//             else {
//                 temp1 = temp1 -> next;
//                 temp2 = temp2 -> next;
//             }
//         }
//         return true;
//     }
//     bool isPalindrome(ListNode* head) {
//         //break into two halves
//         ListNode* middleNode = middleNode_Slow_Fast_Approach(head);
//         ListNode* head2 = middleNode ->  next;
//         middleNode -> next = NULL;
//         //reverse second list
//         ListNode* prev = NULL;
//         ListNode* curr = head2;
//         head2 = revRecursion(prev,curr);
//         //Compare both lists
//         bool finalAns = compareList(head,head2);
//         if(finalAns) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// };




// //Check Cycle in Linked List
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         map<ListNode*, bool> table;   
//         ListNode* temp = head;
//         while(temp != NULL) {
//             if(table[temp] == false) {
//                 table[temp] = true;
//             }
//             else {
//                 //Cycle present
//                 return true;
//             }
//             temp = temp -> next;
//         }
//         //Cycle not present
//         return false;
//     }
// };