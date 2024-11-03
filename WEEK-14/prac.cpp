#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* inToBST(int in[],int size,int s,int e) {
    //base case
    if(s > e) {
        return NULL;
    }
    //one case
    int mid = s + (e-s)/2;
    int ele = in[mid];
    Node* root = new Node(ele);
    //Recursion
    root->left = inToBST(in,size,s,mid-1);
    root -> right = inToBST(in,size,mid+1,e);
    return root;
}

void levelOrder(Node* root) {
    queue<Node*>q;
    if(root == NULL) {
        return;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout<<temp->data<<" ";
            if(temp -> left) {
                q.push(temp->left);
            }
            if(temp -> right) {
                q.push(temp->right);
            }
        }
    }
}

void BSTtoDLL(Node* root,Node* &head) {
    if(root == NULL) return;
    //RNL
    // R
    BSTtoDLL(root->right,head);
    // N
    root -> right = head;
    if(head) {
        head -> left = root;
    }
    head = root;
    BSTtoDLL(root->left,head);
}
void printLL(Node* head) {
    if(head == NULL) return;
    Node* temp = head;
    cout<<"Printing LL: \n";
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp -> right;
    } 
}

Node* DLLtoBST(Node* &head,int n) {
    if(head == NULL || n<=0) return NULL; 
    //LNR
    // L
    Node* LST = DLLtoBST(head,n/2);
    // N
    Node* root = head;
    root -> left = LST;
    head = head -> right;
    // R
    Node* RST = DLLtoBST(root->right,n-n/2-1);
    root -> right = RST;
    return root;
}

int main() {
    // int in[] = {10,20,30,40,50,60,70};
    // int size = sizeof(in)/sizeof(in[0]);
    // int s = 0;
    // int e = size - 1;
    // Node* root = inToBST(in,size,s,e);
    // levelOrder(root);
    // Node* head = NULL;
    // BSTtoDLL(root,head);
    // printLL(head);
   
   
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first -> right = second;
    second -> left = first;
    second -> right = third;
    third -> left = second;

    Node* head = first;
    Node* root = DLLtoBST(head,3);
    levelOrder(root);
}