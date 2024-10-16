#include<iostream>
#include<stack>
using namespace std;

// //Using STL
// int main() {
//     //Creation 
//     stack<int> st;

//     //Insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     //Size check
//     cout<<"Size of stack is: "<<st.size()<<endl;

//     //Remove
//     st.pop();

//     //Check empty
//     if(st.empty()) {
//         cout<<"Stack is empty\n";
//     }
//     else {
//         cout<<"Stack is not empty\n";
//     }

//     //Top element
//     cout<<"Top element is: "<<st.top()<<endl;

// }



// //Using Arrays
// class Stack {
//     int *arr;
//     int top;
//     int size;

//     public:
//         Stack(int size) {
//             arr = new int[size];
//             this->size = size;
//             this->top = -1;
//         }
//         void push(int data) {
//             if(top == size-1) {
//                 cout<<"Stack overflowed"<<endl;
//             }
//             else {
//                 top++;
//                 arr[top] = data;
//             }
//         }
//         void pop() {
//             if(top == -1) {
//                 cout<<"Stack is empty"<<endl;
//             }
//             else {
//                 top--;
//             }
//         }
//         bool isEmpty() {
//             if(top == -1) {
//                 return true;
//             }
//             else {
//                 return false;
//             }
//         }
//         int getTop() {
//             if(top==-1) {
//                 cout<<"Stack is empty"<<endl;
//                 return -1;
//             }
//             else {
//                 return arr[top];
//             }
//         }
//         int getSize() {
//             return top+1;
//         }
//         void print() {
//             cout<<"Top: "<<top<<endl;
//             cout<<"Top element is: "<<getTop()<<endl;
//             cout<<"Stack: ";
//             for(int i=0;i<getSize();i++) {
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main() {
//     //Creation
//     Stack st(8);

//     //Push
//     st.push(10);
//     st.print();
//     st.push(20);
//     st.print();

//     st.push(30);
//     st.print();

//     st.pop();
//     st.print();
//     st.pop();
//     st.print();

//     st.push(40);
//     st.push(50);
//     st.push(60);
//     st.push(70);
//     st.push(80);
//     st.push(90);
//     st.push(100);
//     st.push(110);
//     cout<<st.getSize()<<endl;
//     if(st.isEmpty()) {
//         cout<<"Empty";
//     }
//     else {
//         cout<<"Non Empty";
//     }
// }


// //Reverse order 

// int main() {
//     string str = "PeaceCool";
//     stack<char>st;
//     for(int i=0;i<str.length();i++) {
//         st.push(str[i]);
//     }
//     while(!st.empty()) {
//         cout<<st.top();
//         st.pop();
//     }
// }



// //Middle Element of Stack

// void solve(stack<int>&st,int &pos,int &ans) {
//     //base case
//     if(pos==1) {
//         ans = st.top();
//         return;
//     }

//     //1 case jo hum solve karenge
//     pos--;
//     int temp = st.top();
//     st.pop();

//     //recursion
//     solve(st,pos,ans);
    
//     //backtracking
//     st.push(temp);
// }

// int getMiddleElement(stack<int> &st) {
//     int size = st.size();
//     if(st.empty()) {
//         return -1;
//     }
//     else {
//         //Stack is not empty
//         //Odd
//         int pos = 0;
//         if(st.size() & 1) {
//             pos = size/2 +1;
//         }
//         else {
//             pos = size/2;
//         }
//         int ans = -1;
//         solve(st,pos,ans);
//         return ans;
//     }
// }

// int main() {
//     stack<int>st;
//     st.push(10);
//     st.push(30);
//     st.push(50);
//     st.push(70);
//     st.push(90);
//     int mid = getMiddleElement(st);
//     cout<<"Middle element of the stack is: "<<mid<<endl;    
// }




// //Insert at bottom of Stack

// void insertAtBottom(stack<int>&st,int &n) {
//     //Base Case
//     if(st.empty()) {
//         st.push(n);
//         return;
//     }

//     //One case solved by me
//     int temp = st.top();
//     st.pop();

//     //Recusrion
//     insertAtBottom(st,n);

//     //Backtracking
//     st.push(temp);
// }

// //Reverse a stack
// void reverseStack(stack<int>&st) {
//     //base case
//     if(st.empty()) {
//         return;
//     }
    
//     //1 case 
//     int temp = st.top();
//     st.pop();

//     //Recursion
//     reverseStack(st);

//     //backtracking
//     insertAtBottom(st,temp);
// }

// void insertSortedStack(stack<int>&st,int &n) {
//     //base case
//     if(st.empty() || n >= st.top()) {
//         st.push(n);
//         return;
//     }
//     // 1 case by us
//     int temp = st.top();
//     st.pop();
//     //Recursion
//     insertSortedStack(st,n);
//     //Backtracking
//     st.push(temp);
// }

// void sortStack(stack<int>&st) {
//     //Base Case
//     if(st.empty()) {
//         return;
//     }
//     //One Case by me
//     int temp = st.top();
//     st.pop();
//     //Recursion
//     sortStack(st);
//     //backtracking
//     insertSortedStack(st,temp);
// }

// int main() {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     int n = 25;

//     // cout<<st.size()<<endl;

//     // insertAtBottom(st,n);

//     // cout<<st.size()<<endl;

//     // while(!st.empty()) {
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }

//     // reverseStack(st);
//     // while(!st.empty()) {
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }

//     // insertSortedStack(st,n);
//     // while(!st.empty()) {
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }

//     st.push(13);
//     sortStack(st);
//     while(!st.empty()) {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }