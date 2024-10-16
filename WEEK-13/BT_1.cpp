#include<iostream>
#include<queue>
using namespace std;

class Node {
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

//It returns root node of the created tree
Node* createTree() {
    cout<<"Enter the value for node: ";
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }
    //Step 1:Create a Node
    Node* root = new Node(data);
    //Step 2: Create left subtree
    cout<<"left of node: " << root->data << endl;
    root -> left = createTree();
    //Step3: Create right subtree
    cout<<"right of node: " << root->data << endl;
    root -> right = createTree();

    return root;
}

void preOrder(Node* root) {
    //Base Case
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
    //Base Case
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
    //Base Case
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
    q.push(root);

    //asli traversal starts
    while(!q.empty()) {
        Node *front = q.front();
        q.pop();
        cout<<front -> data<<" ";
        if(front -> left != NULL) {
            q.push(front -> left);
        }
        if(front -> right != NULL) {
            q.push(front -> right);
        }
    } 
}

void levelOrderLine(Node* root) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    //asli traversal starts
    while(q.size() > 1) {
        Node *front = q.front();
        q.pop();
        if(front == NULL) {
            cout<<endl;
            q.push(NULL);
        }
        else {
            //valid node wala case
            cout<<front -> data<<" ";
            if(front -> left != NULL) {
                q.push(front -> left);
            }
            if(front -> right != NULL) {
                q.push(front -> right);
            }
        }     
    } 
}

void levelOrderLine2(Node* root) {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    //asli traversal starts
    while(!q.empty()) {
        Node *front = q.front();
        q.pop();
        if(front == NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            //valid node wala case
            cout<<front -> data<<" ";
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
    Node* root = createTree();
    cout<<root -> data<<endl;
    cout<<"Preorder: \n";
    preOrder(root);
    cout<<endl;
    cout<<"Inorder: \n";
    inOrder(root);
    cout<<endl;
    cout<<"Postorder: \n";
    postOrder(root);
    cout<<endl;
    cout<<"Levelorder: \n";
    levelOrder(root);
    cout<<endl;
    cout<<"Level Order Line: \n";
    levelOrderLine(root);
    cout<<endl;
    cout<<"Level Order Line Solution 2: \n";
    levelOrderLine2(root);
    cout<<endl;
}