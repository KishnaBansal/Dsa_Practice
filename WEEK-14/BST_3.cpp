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

//convert BST to sorted doubly LL
void convertBSTtoLL(Node* root,Node* &head) {
    if(root == NULL) return;

    //RNL
    // R
    convertBSTtoLL(root->right,head);
    // N
    //attaching next pointer of current node to head of LL
    root->right = head;
    if(head != NULL)
        //attaching prev pointer of head of LL to current node
        head -> left = root;
    head = root;
    // L
    convertBSTtoLL(root->left,head);
}
void printLL(Node* head) {
    Node* temp = head;
    cout<<"Printing the LL: \n";
    while(temp) {
        cout<<temp->data<<" ";
        temp = temp->right;
    }
    cout<<endl;
}

Node* convertDLLtoBST(Node* &head,int n) {
    if(head==NULL || n<=0) return NULL;

    //LNR
    // L
    Node* leftSubTree = convertDLLtoBST(head,n/2);
    // N
    Node* root = head;
    root -> left = leftSubTree;
    //head update
    head = head -> right;
    // R
    Node* rightSubTree = convertDLLtoBST(head,n - (n/2) -1);
    root -> right = rightSubTree;
    
    return root;
}

int main() {
    // Node* root = NULL;
    // createBST(root);

    // levelOrderTraversal(root);

    // int inorder[] = {10,20,30,40,50,60,70};
    // int size = sizeof(inorder)/sizeof(inorder[0]);
    // int s = 0;
    // int e = size-1;
    // Node* root = BSTfromInorder(inorder,s,e);
    // levelOrderTraversal(root);
    // Node* head = NULL;
    // convertBSTtoLL(root,head);
    // printLL(head);

    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);

    // first -> right = second;
    // second -> left = first;
    // second -> right = third;
    // third -> left = second;

    // Node* head = first;
    // //10 -> 20 -> 30
    // Node* root = convertDLLtoBST(head,3);
    // levelOrderTraversal(root);
}