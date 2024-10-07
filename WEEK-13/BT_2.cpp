#include<iostream>
#include<queue>
#include <map>
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

int searchInOrder(int inOrder[],int size,int target) {
    for(int i=0;i<size;i++) {
        if(inOrder[i] == target) {
            return i;
        }
    }
    return -1;
}

void createMapping(int inOrder[],int size,map<int,int> &valueToIndexMap) {
    for(int i=0;i<size;i++) {
        int ele = inOrder[i];
        int index = i;
        valueToIndexMap[ele] = index;
    }
}

Node* constructTreeUsinInAndPre(map<int,int>&valueToIndexMap,int inOrder[],int preOrder[],int &preIndex,int inOrderStart,int inOrderEnd,int size) {
    //base case
    if(preIndex >= size || inOrderStart > inOrderEnd) {
        return NULL;
    }
    //One case solved by me
    int ele = preOrder[preIndex];
    preIndex++;
    Node* root = new Node(ele);
    // int pos = searchInOrder(inOrder,size,ele);
    int pos = valueToIndexMap[ele];
    
    root -> left = constructTreeUsinInAndPre(valueToIndexMap,inOrder,preOrder,preIndex,inOrderStart,pos-1,size);
    root -> right = constructTreeUsinInAndPre(valueToIndexMap,inOrder,preOrder,preIndex,pos+1,inOrderEnd,size);

    return root;

}
Node* constructTreeUsinInAndPost(map<int,int>&valueToIndexMap,int inOrder[],int postOrder[],int &postIndex,int inOrderStart,int inOrderEnd,int size) {
    //base case
    if(postIndex < 0 || inOrderStart > inOrderEnd) {
        return NULL;
    }
    //One case solved by me
    int ele = postOrder[postIndex];
    postIndex--;
    Node* root = new Node(ele);
    // int pos = searchInOrder(inOrder,size,ele);
    int pos = valueToIndexMap[ele];
    
    root -> right = constructTreeUsinInAndPost(valueToIndexMap,inOrder,postOrder,postIndex,pos+1,inOrderEnd,size);
    root -> left = constructTreeUsinInAndPost(valueToIndexMap,inOrder,postOrder,postIndex,inOrderStart,pos-1,size);

    return root;

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
int main() {
    // int inOrder[] = {10,8,6,2,4,12};
    // int preOrder[] = {2,8,10,6,4,12};
    // int size = sizeof(inOrder)/sizeof(inOrder[0]);
    // int preIndex = 0;
    int inOrder[] = {8,14,6,2,10,4};
    int postOrder[] = {8,6,14,4,10,2};
    int size = sizeof(inOrder)/sizeof(inOrder[0]);
    int postIndex = size - 1;
    int inOrderStart = 0;
    int inOrderEnd = size - 1;
    map<int,int>valueToIndexMap;
    createMapping(inOrder,size,valueToIndexMap);
    // Node* root = constructTreeUsinInAndPre(valueToIndexMap,inOrder,preOrder,preIndex,inOrderStart,inOrderEnd,size);
    Node* rootPost = constructTreeUsinInAndPost(valueToIndexMap,inOrder,postOrder,postIndex,inOrderStart,inOrderEnd,size);
    cout<<"Printing tree: \n";
    // levelOrder(root); 
    // levelOrderLine(root);
    levelOrderLine(rootPost);
}