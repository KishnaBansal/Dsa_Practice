#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL; 
    }
};


Node* insertIntoBST(Node* root,int data) {
    //creating first node
    if(root == NULL) {
        root = new Node(data);
        return root;
    }
    //Not the first node
    if(data > root->data) {
        root->right = insertIntoBST(root->right,data);
    }
    else {
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}
void createBST(Node* &root) {
    cout<<"Enter data: \n";
    int data;
    cin>>data;
    while(data != -1) {
        root = insertIntoBST(root,data);
        cout<<"Enter data: \n";
        cin>>data;
    }
}

void levelOrderTraversal(Node* root) {
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
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

Node* BSTfromInorder(int inorder[],int s,int e) {
    //base case
    if(s > e) {
        return NULL;
    }
    //one case
    int mid = s+(e-s)/2;
    int ele = inorder[mid];
    Node* root = new Node(ele);
    //recursion
    root->left = BSTfromInorder(inorder,s,mid-1);
    root->right = BSTfromInorder(inorder,mid+1,e);

    return root;
}

int main() {
    // Node* root = NULL;
    // createBST(root);

    // levelOrderTraversal(root);

    int inorder[] = {10,20,30,40,50,60,70};
    int size = sizeof(inorder)/sizeof(inorder[0]);
    int s = 0;
    int e = size-1;
    Node* root = BSTfromInorder(inorder,s,e);
    levelOrderTraversal(root);
}