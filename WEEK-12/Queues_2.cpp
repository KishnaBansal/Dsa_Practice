#include<iostream>
#include<queue>
#include<stack>
#include<deque>
using namespace std;

void reverseQueue(queue<int>&q) {
    stack<int>st;
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

void reverseQueueRec(queue<int>&q) {
    //Base Case
    if(q.empty()) {
        return;
    }
    //One case for us
    int temp = q.front();
    q.pop();
    //Recursion
    reverseQueueRec(q);
    //Backtracking
    q.push(temp);
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        cout<<temp<<" "; 
    }
}

void reverseFirstK(queue<int>q,int n,int k) {
    stack<int>st;
    if(k>n || k==0) {
        return;
    }
    //Push all k elements into stack
    for(int i=0;i<k;i++) {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }
    //Push all k elements into queue
    while(!st.empty()) {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
    //Push all (n-k) elements from front to rear
    for(int i=0;i<(n-k);i++) {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        cout<<temp<<" "; 
    }
}

void interleaveQueue(queue<int>&q) {
    queue<int>q2;
    int size = q.size();
    //Push first half of first queue to second queue
    for(int i=0;i<size/2;i++) {
        int temp = q.front();
        q.pop();
        q2.push(temp);
    }
    //Merge both the halves
    //into the original queue i.e., q
    for(int i=0;i<size/2;i++) {
        int temp = q2.front();
        q2.pop();
        q.push(temp);

        temp = q.front();
        q.pop();
        q.push(temp);
    }
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        cout<<temp<<" "; 
    }
}

void firstNegativeInt(int *arr,int n,int k) {
    deque<int>dq;

    //process first k elements - first window
    for(int i=0;i<k;i++) {
        int temp = arr[i];
        if(temp < 0) {
            dq.push_back(i);
        }
    }

    //process reamining windows - removal and addition
    //Remaining elememnts will start from index k
    for(int i=k;i<n;i++) {
        //but first find old window answer
        if(dq.empty()) {
        cout<<"0"<<endl;
        }
        else {
            cout<<arr[dq.front()];
        }
        //Removal - jo bhi index out of range h use queue se remove kardo
        if(i - dq.front() >= k) {
            dq.pop_front();
        }
        //Addition
        if(arr[i] < 0) {
            dq.push_back(i); 
        }
    }

    //Last window
    if(dq.empty()) {
        cout<<"0"<<endl;
    }
    else {
        cout<<arr[dq.front()];
    }
}

int main() {
    queue<int>q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    int n = q.size();
    int k = 3;
    // reverseQueue(q);   
    // reverseQueueRec(q); 
    // reverseFirstK(q,n,k);
    interleaveQueue(q);
    cout<<endl;
}
