#include<iostream>
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

//Creating a tree
Node* createTree() {
    int data;
    cin>>data;
    if(data == -1) {
        return NULL;
    }
    //step1: Create a node
    Node* root = new Node(data);
    //step2: Insert at left of the node
    cout<<"Enter value for left of node: "<<root->data<<endl;
    root -> left = createTree();
    //step2: Insert at right of the node
    cout<<"Enter value for right of node: "<<root->data<<endl;
    root -> right = createTree();
    return root;
}



int main() {
    Node* root = createTree();
    cout<<root->data<<endl;
}