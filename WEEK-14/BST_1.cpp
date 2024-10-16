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

void preOrder(Node* root) {
    //NLR
    if(!root) return;
    // N
    cout<<root->data<<" ";
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

void inOrder(Node* root) {
    //LNR
    if(!root) return;
    // L
    inOrder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inOrder(root->right);
}

void postOrder(Node* root) {
    //LRN
    if(!root) return;
    // L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout<<root->data<<" ";
}

void minElement(Node* root) {
    if(root == NULL) {
        cout<<"No node present in the tree";
        return;
    }
    Node* min = root;
    while(min->left != NULL) {
        min = min->left;
    }
    cout<<"Minimum value is: "<<min->data;
}

void maxElement(Node* root) {
    if(root == NULL) {
        cout<<"No node present in the tree";
        return;
    }
    Node* max = root;
    while(max->right != NULL) {
        max = max->right;
    }
    cout<<"Minimum value is: "<<max->data;
}

bool searchInBST(Node* root,int target) {
    if(root == NULL) return false;
    //one case
    if(root->data == target) {
        return true;
    }
    //Recursion
    bool leftAns = false;
    bool rightAns = false;
    if(target > root->data) {
        rightAns = searchInBST(root->right,target);
    }
    else {
        leftAns = searchInBST(root->left,target);
    }
    return leftAns || rightAns;
}


Node* maxValue(Node* root) {
	if(root == NULL) {
		return NULL;
	}

	//if tree has nodes > 0 count
	Node* temp = root;
	while(temp->right != NULL) {
		temp = temp->right;
	}
	return temp;
}
Node* deleteFromBST(Node* root,int target) {
    //find target
    //delete target

    if(root==NULL) {
        return NULL;
    }
    if(root->data == target) {
        //delete the node
        //4 cases

        //1 -> Leaf Node
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        //2 -> left is null and right is non null
        if(root->left == NULL && root->right != NULL) {
            Node* childSubTree = root->right;
            delete root;
            return childSubTree;
        }
        //3 -> left is non null and right null
        if(root->left != NULL && root->right == NULL) {
            Node* childSubTree = root->left;
            delete root;
            return childSubTree;
        }
        //4 -> both left and right are non null
        if(root->left != NULL && root->right != NULL) {
            //a -> left subtree ki max value
            Node* maxi = maxValue(root->left);
            //replacement
            root -> data = maxi -> data;
            //delete actual maxi wali node
            //maxi ki value wali jo bhi node mile use delete kar dena
            //updated tree ko root ke left mai lagana bhi to padega
            root->left = deleteFromBST(root->left,maxi->data);

        }
    }
    else if(root->data < target) {
        //updated tree ko root ke left mai lagana bhi to padega
        root->right = deleteFromBST(root->right,target);
    }
    else {
        //updated tree ko root ke right mai lagana bhi to padega
        root -> left = deleteFromBST(root->left,target);
    }
}

int main() {
    Node* root = NULL;
    createBST(root);

    levelOrderTraversal(root);

    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    minElement(root);
    cout<<endl;
    maxElement(root);
    cout<<endl;

    // int target;
    // cout<<"Enter target to find: \n";
    // cin>>target;
    // while(target != -1) {
    //     bool findEle = searchInBST(root,target);
    //     if(findEle) {
    //         cout<<"Found!!"<<endl;
    //     }
    //     else {
    //         cout<<"Not Found!!"<<endl;
    //     }
    //     cout<<"Enter target to find: \n";
    //     cin>>target;
    // }


    int target = -1;
    cout<<"Enter target to be deleted: \n";
    cin >> target;
    while(target != -1) {
        root = deleteFromBST(root,target);
        cout<<"Level order traversal\n";
        levelOrderTraversal(root);

        cout<<"Enter target to be deleted: \n";
        cin >> target;
    }
}

// 50 30 40 20 60 55 70 80 25