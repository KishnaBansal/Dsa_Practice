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
    //not the first node
    if(data > root->data) {
        root->right = insertIntoBST(root->right,data);
    }
    if(data < root->data) {
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

void createBST(Node* &root) {
    cout<<"Enter data: "<<endl;
    int data;cin>>data;
    while(data != -1) {
        root = insertIntoBST(root,data);
        cout<<"Enter data: "<<endl;
        cin >> data;
    }
}

void levelOrderTraversal(Node* root) {
    queue<Node*>q;
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
            if(temp->left != NULL) {
                q.push(temp->left);
            }
            if(temp->right != NULL) {
                q.push(temp->right);
            }
        }
    }
}

int KthSmallestElement(int arr[],int n,int k) {
    priority_queue<int>pq;
    //first 'k' elements ko queue mai dalna hai
    for(int i=0;i<k;i++) {
        pq.push(arr[i]);
    }
    //remaining elements ko tabhi insert karo jab vo root element se chota ho
    for(int i=k;i<n;i++) {
        int ele = arr[i];
        if(ele < pq.top()) {
            pq.pop();
            pq.push(ele);
        }
    }
    int ans = pq.top();
    return ans;
}   

int KthGreatestElement(int arr[],int n,int k) {
    priority_queue<int,vector<int>,greater<int>>pq;
    //first 'k' elements ko queue mai dalna hai
    for(int i=0;i<k;i++) {
        pq.push(arr[i]);
    }
    //remaining elements ko tabhi insert karo jab vo root element se chota ho
    for(int i=k;i<n;i++) {
        int ele = arr[i];
        if(ele > pq.top()) {
            pq.pop();
            pq.push(ele);
        }
    }
    int ans = pq.top();
    return ans;
} 

class Info{
public:
    int maxValue;
    bool isHeap;
    Info(int a,bool b) {
        this->maxValue = a;
        this->isHeap = b;
    }
};

// Info checkMaxHeap(Node* root) {
//     //base case
//     if(root == NULL) {
//         Info temp;
//         temp.maxValue = INT_MIN;
//         temp.isHeap = true;
//         return temp;
//     }
//     if(root->left == NULL && root->right == NULL) {
//         Info temp;
//         temp.maxValue = root -> data;
//         temp.isHeap = true;
//         return temp; 
//     }
//     Info leftAns = checkMaxHeap(root->left);
//     Info rightAns = checkMaxHeap(root->right);
//     //1 case solved by us
//     if(root->data > leftAns.maxValue && root->data > rightAns.maxValue && leftAns.isHeap && rightAns.isHeap) {
//         Info ans;
//         ans.maxValue = root->data;
//         ans.isHeap = true;
//         return ans;
//     }
//     else {
//         ans.maxValue = max(root->data,max(leftAns.maxValue,rightAns.maxValue));
//         ans.isHeap = false;
//         return ans;
//     }
// }


void storeInorderTraversal(Node* root,vector<int>&in) {
    if(root == NULL) return;
    //LNR
    storeInorderTraversal(root->left,in);
    in.push_back(root->data);
    storeInorderTraversal(root->right,in);

}
void replaceUsingPostOrder(Node* root,vector<int>&in,int &index) {
    if(root == NULL) return;
    //LRN
    replaceUsingPostOrder(root->left,in,index);
    replaceUsingPostOrder(root->right,in,index);
    root->data = in[index];
    index++;
}
Node* convertBSTtoHeap(Node* root) {
    //step 1: Store inorder
    vector<int> in;
    storeInorderTraversal(root,in);
    //step 2 : replace the node values with the sorted inorder values, using the postorder traversal
    int index = 0;
    replaceUsingPostOrder(root,in,index);
    return root;
}

int main() {
    // //create max heap
    // priority_queue<int>pq;
    // //insertion
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(50);

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top element: "<<pq.top()<<endl;
    // cout<<"Size of heap: "<<pq.size()<<endl;
    // if(pq.empty()) {
    //     cout << "Empty"<<endl;
    // }
    // else {
    //     cout<<"Not empty"<<endl;
    // }


    // //min heap creation
    // priority_queue<int, vector<int>, greater<int>>pq;
    // pq.push(100);
    // pq.push(90);
    // pq.push(70);

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top element: "<<pq.top()<<endl;
    // cout<<"Size of heap: "<<pq.size()<<endl;
    // if(pq.empty()) {
    //     cout << "Empty"<<endl;
    // }
    // else {
    //     cout<<"Not empty"<<endl;
    // }


    // int arr[] = {3,5,4,6,9,8,7};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int k = 5;
    // cout << "Kth smallest element is: "<<KthSmallestElement(arr,n,k) << endl;
    // cout << "Kth greatest element is: "<<KthGreatestElement(arr,n,k) << endl;

    Node* root = NULL;
    createBST(root);
    cout<<"Printing BST: \n";
    levelOrderTraversal(root);

    cout<<"Converting into heap: \n";
    root = convertBSTtoHeap(root);
    cout<<"Printing Heap: \n";
    levelOrderTraversal(root);
}

// 100 50 150 40 60 110 200 20 -1