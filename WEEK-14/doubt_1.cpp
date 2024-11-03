#include<iostream>
#include<queue>
#include <map>
using namespace std;

class Node{
public:    
    int data;
    int childrenCount;
    Node**children;  //dynamic array
    Node(int data) {
        this -> data = data;
        this -> childrenCount = 0;
        this -> children = 0;
    }
};

Node* takeInput() {
    int data;
    int count;
    cout<<"Enter root data: ";
    cin >> data;
    cout<<"Enter children count for " << data << endl;
    cin >> count;
    Node* root = new Node(data);
    root -> childrenCount = count;
    root -> children = new Node*[count];  //array to store links to children
    for(int i=0;i<count;i++) {
        root->children[i] = takeInput();
    }
    return root;
}

void levelOrder(Node*root) {
    queue<Node*>q;
    q.push(root);
    q.push(0);
    while(!q.empty()) {
        auto front = q.front();
        q.pop();
        if(front == NULL) {
            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout<<front->data<<" ";
            for(int i=0;i<front->childrenCount;i++) {
                if(front->children[i]) {             
                    q.push(front ->children[i]);
                }
            }
        }
    }
}

int main() {
    Node* root = takeInput();
    levelOrder(root);
}