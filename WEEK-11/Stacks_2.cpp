#include<iostream>
#include<stack>
using namespace std;


//Implement two stacks in one array

// class Stack {
//     int *arr;
//     int top1;
//     int top2;
//     int size;
//     public:
//         Stack(int size) {
//             this -> arr = new int[size];
//             this -> size = size;
//             this -> top1 = -1;
//             this -> top2 = size;

//             for(int i=0;i<size;i++) {
//                 arr[i] = 0;
//             }
//         }
//         void push1(int data) {
//             if(top2-top1==1) {
//                 cout<<"Overflow"<<endl;
//                 return;
//             }
//             top1++;
//             arr[top1] = data;
//         }
//         void push2(int data) {
//             if(top2-top1==1) {
//                 cout<<"Overflow"<<endl;
//                 return;
//             }
//             top2--;
//             arr[top2] = data;
//         }
//         void pop1() {
//             if(top1 == -1) {
//                 cout<<"Stack1 is empty\n";
//                 return;
//             }
//             arr[top1] = 0;
//             top1--;
//         }
//         void pop2() {
//             if(top2 == size) {
//                 cout<<"Stack2 is empty\n";
//                 return;
//             }
//             arr[top2] = 0;
//             top2++;
//         }
//         void print() {
//             cout<<"Top1: "<<top1<<endl;
//             cout<<"Top2: "<<top2<<endl;
//             for(int i=0;i<size;i++) {
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

// int main() {
//     Stack st(6);
//     st.print();
//     st.push1(10);
//     st.print();
//     st.push1(20);
//     st.print();
//     st.push2(100);
//     st.print();
//     st.push2(200);
//     st.print();
//     st.push2(300);
//     st.print();
//     st.push2(700);
//     st.print();
//     st.push2(1000);
//     st.pop1();
//     st.print();
//     st.pop1();
//     st.print();
//     st.pop1();

// }



//Remove Redundant Brackets

bool checkRedundant(string str) {
    stack<char>st;
    for(int i=0;i<str.length();i++) {
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '*' || ch == '-' || ch == '/') {
            st.push(ch);
        }
        else if(ch == ')') {
            int opCount = 0;
            while(!st.empty() && st.top() != '(') {
                char temp = st.top();
                if(temp == '+' || temp == '*' || temp=='-' || temp == '/') {
                    opCount++;
                }
                st.pop();
            }
            //We will reach here when we have an opening bracket at top of the stack
            st.pop();
            if(opCount == 0) {
                return true;
            }
        }
    }
    //If we reached here that mean we got an operator in each pair of brackets
    return false;
}

int main() {
    string str = "((a+b) * (c+d))";
    bool ans = checkRedundant(str);
    if(ans == true) {
        cout<<"Redundant"<<endl;
    }
    else {
        cout<<"Not redundant"<<endl;
    }
}