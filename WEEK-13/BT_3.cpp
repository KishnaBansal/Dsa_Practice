#include<iostream>
#include <queue>
#include<vector>
#include<map>
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

Node* createTree() {
    cout<<"Enter value of the node: \n";
    int data;
    cin>>data;
    if(data == -1) {
        return NULL;
    }
    else {
        Node* root = new Node(data);
        cout<<"For left of node: "<<root -> data<<endl;
        root -> left = createTree();
        cout<<"For right of node: "<<root -> data<<endl;
        root -> right = createTree();
        return root;
    }
}

void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    //NLR
    //N
    cout<<root->data<<" ";
    //L
    preOrder(root->left);
    //R
    preOrder(root->right);
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    //NLR
    //L
    inOrder(root->left);
    //N
    cout<<root->data<<" ";
    //R
    inOrder(root->right);
}

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    //NLR
    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout<<root->data<<" ";
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

void printLeftView(Node* root,int level,vector<int>&leftView) {
    //Base case
    if(root == NULL) {
        return;
    }
    //One case
    if(level == leftView.size()) {
        //We got the node
        leftView.push_back(root->data);
    }
    //recursion
    printLeftView(root->left,level+1,leftView);
    printLeftView(root->right,level+1,leftView);

}

void printRightView(Node* root,int level,vector<int>&rightView) {
    //Base case
    if(root == NULL) {
        return;
    }
    //One case
    if(level == rightView.size()) {
        //We got the node
        rightView.push_back(root->data);
    }
    //recursion
    printRightView(root->right,level+1,rightView);
    printRightView(root->left,level+1,rightView);

}

void printTopView(Node* root) {
    map<int,int> hdToNodemap;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()) {
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int hd = temp.second;
        //If answer is not stored for hd, then store it now
        //If there is no entry for hd in map, then create a new entry
        if(hdToNodemap.find(hd) == hdToNodemap.end()) {
            hdToNodemap[hd] = frontNode -> data;
        }
        //child ko dekhna hai
        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"Printing top view: \n";
    for(auto i : hdToNodemap) {
        cout<<i.second<<" ";
    }
}

void printBottomView(Node* root) {
    map<int,int>hdToLevelMap;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()) {
        pair<Node*,int>temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second;
        hdToLevelMap[hd] = frontNode->data;
        //child
        if(frontNode->left != NULL) {
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right != NULL) {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    cout<<"Printing bottom view: \n";
    for(auto i : hdToLevelMap) {
        cout<<i.second<<" ";
    }
}

void printLeftBoundary(Node* root) {
    if(root == NULL) {
        return;
    }
    if(root->left==NULL && root->right==NULL) {
        return;
    }
    cout<<root->data<<" ";
    if(root->left != NULL) {
        printLeftBoundary(root->left);
    }
    else {
        printLeftBoundary(root->right);
    }
}

void printLeafBoundary(Node* root) {
    if(root == NULL) {
        return;
    }
    if(root->left==NULL && root->right==NULL) {
        cout<<root->data<<" ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
    if(root == NULL) {
        return;
    }
    if(root->left==NULL && root->right==NULL) {
        return;
    }
    if(root->right != NULL) {
        printLeftBoundary(root->right);
    }
    else {
        printLeftBoundary(root->right);
    }
    cout<<root->data<<" ";

}

void boundaryTraversal(Node* root) {
    if(root==NULL) {return;}
    printLeftBoundary(root);
    printLeafBoundary(root);
    if(root->right!=NULL) {
        printRightBoundary(root->right);
    }
    else {
        printRightBoundary(root->left);
    }
}

int main() {
    Node* root = createTree();
    levelOrder(root);
    cout<<endl;
    vector<int>leftView;
    cout<<"Printing left view: \n";
    printLeftView(root,0,leftView);
    for(auto i : leftView) {
        cout<<i<<" ";
    }
    vector<int>rightView;
    cout<<"Printing right view: \n";
    printRightView(root,0,rightView);
    for(auto i : rightView) {
        cout<<i<<" ";
    }
    cout<<"\n";
    printTopView(root);
    cout<<"\n";
    printBottomView(root);
    cout<<"\n"; 
    cout<<"Printing Left boundary: \n";
    printLeftBoundary(root);
    cout<<"\nPrinting leaf boundary: \n";
    printLeafBoundary(root);
    cout<<"\nPrinting leaf boundary: \n";
    boundaryTraversal(root);
}



// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1