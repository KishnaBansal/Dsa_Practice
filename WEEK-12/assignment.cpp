#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int fun(int *arr,int n,int k) {
    deque<int>dq,dq2;
    int ans=0;
    //first window 
    for(int i=0;i<k;i++) {
        int ele = arr[i];
        //remove smaller element 
        while(!dq.empty() && ele>=dq.back()) {
            dq.pop_back();
        }
        //remove bigger element
        while(!dq2.empty() && ele <= dq2.back()) {
            dq2.pop_back();
        }
        dq.push_back(i);
        dq2.push_back(i);
    }
    ans += arr[dq.front()] + arr[dq2.front()];

    //remaining windows
    for(int i=k;i<n;i++) {
        //remove out of bound from dq
        if(!dq.empty() && i - dq.front() >= k) {
            dq.pop_front();
        }
        //remove out of bound from dq2
        if(!dq2.empty() && i - dq2.front() >= k) {
            dq2.pop_front();
        }
        int ele = arr[i];
        //remove smaller element from dq
        while(!dq.empty() && ele >= arr[dq.back()]) {
            dq.pop_back();
        }
        //remove smaller element from dq2
        while(!dq2.empty() && ele <= arr[dq2.back()]) {
            dq2.pop_back();
        }
        //addition in dq
        dq.push_back(i);
        dq2.push_back(i);
        ans += arr[dq.front()] + arr[dq2.front()];
    }
    return ans;
}

int main() {
    int arr[] = {2,5,-1,7,-3,-1,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int temp = fun(arr,n,k);
    cout<<temp<<endl;
}