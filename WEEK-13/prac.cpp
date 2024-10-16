#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree() {
    cout<<"Enter value of node: \n";
    int data;cin>>data;
    if(data == -1) {
        return NULL;
    }
    Node* root = new Node(data);

    cout<<"For left of node "<<root->data<<endl;
    root->left = createTree();
    cout<<"For right of node "<<root->data<<endl;
    root->right = createTree();
    return root;
}

void levelOrder(Node* root) {
    queue<Node*>q;
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
            cout<<front->data<<" ";
            if(front->left != NULL) {
                q.push(front->left);
            }
            if(front->right != NULL) {
                q.push(front->right);
            }
        }
    }
}

void printLeftView(Node* root,vector<int>&leftView,int level) {
    //base case
    if(root==NULL) {
        return;
    }
    //one case
    if(level == leftView.size()) {
        leftView.push_back(root->data);
    }
    //recursion
    printLeftView(root->left,leftView,level+1);
    printLeftView(root->right,leftView,level+1);
}

void printRightView(Node*root,vector<int>&rightView,int level) {
    //base case
    if(root == NULL) {
        return;
    }
    //one case
    if(level == rightView.size()) {
        rightView.push_back(root->data);
    }
    //recursion
    printRightView(root->right,rightView,level+1);
    printRightView(root->left,rightView,level+1);
}

void topView(Node* root) {
    map<int,int>hdToNodeMap;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()) {
        pair<Node*,int>temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second;

        if(hdToNodeMap.find(hd) == hdToNodeMap.end()) {
            hdToNodeMap[hd] = frontNode->data;
        }
        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i : hdToNodeMap) {
        cout<<i.second<<" ";
    }
}

void bootomView(Node* root) {
    map<int,int>hdToNodeMap;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()) {
        pair<Node*,int> temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second;
        hdToNodeMap[hd] = frontNode->data;
        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i : hdToNodeMap) {
        cout<<i.second<<" ";
    }
}

int main() {
    Node* root = createTree();
    levelOrder(root);
    cout<<endl;
    vector<int>leftView;
    printLeftView(root,leftView,0);
    cout<<"Printing Left View: \n";
    for(auto i : leftView) {
        cout<<i<<" ";
    }
    vector<int>rightView;
    printRightView(root,rightView,0);
    cout<<"\nPrinting right view: \n";
    for(auto i : rightView) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Printing Top view: \n";
    topView(root);
    cout<<endl;
    cout<<"Printing Bottom view: \n";
    bootomView(root);
}