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

Node* createDisplayTree() {
    int data;
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    //create root
    Node* root = new Node(data);
    // cout<<root -> data<<" ";
    //create left sub tree
    cout<<"Left of: "<<root -> data<<endl;
    root -> left = createDisplayTree();
    //create right sub tree
    cout<<"Right of: "<<root -> data<<endl;
    root -> right = createDisplayTree();
    return root;
}

void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    //NLR
    // N
    cout<<root -> data <<" ";
    // L
    preOrder(root->left);
    // R
    preOrder(root -> right);
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    //LNR
    // L
    inOrder(root->left);
    // N
    cout<<root -> data <<" ";
    // R
    inOrder(root -> right);
}

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    //LRN
    // L
    postOrder(root->left);
    // R
    postOrder(root -> right);
    // N
    cout<<root -> data <<" ";
}

void levelOrder(Node* root) {
    queue<Node*>q;
    if(root == NULL) {
        return;
    }
    q.push(root);
    while(!q.empty()) {
        Node* front = q.front();
        cout<<front->data<<" ";
        q.pop();
        if(front -> left != NULL) {
            q.push(front->left);
        }
        if(front -> right != NULL) {
            q.push(front->right);
        }
    }
}

void levelOrderLine(Node* root) {
    queue<Node*>q;
    if(root == NULL) {
        return;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* front = q.front();
        q.pop();
        if(front == NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout<<front ->data<<" ";
            if(front -> left != NULL) {
                q.push(front -> left);
            }
            if(front -> right != NULL) {
                q.push(front -> right);
            }
        }
    }
}

int main() {
    Node* root = createDisplayTree();
    // cout<<root -> data << " ";
    // cout<<endl;
    // cout<<root -> data<<endl;
    // cout<<"Preorder: \n";
    // preOrder(root);
    // cout<<endl;
    // cout<<"Inorder: \n";
    // inOrder(root);
    // cout<<endl;
    // cout<<"Postorder: \n";
    // postOrder(root);
    // cout<<endl;
    // levelOrder(root);
    // cout<<endl;
    levelOrderLine(root);
    cout<<endl;
}