#include<iostream>
#include<queue>
#include<stack>
#include<deque>
using namespace std;

// //First non-repeating character in a stream at every time interval
// int main() {
//     string str = "ababc";
//     queue<char>q;                                                  
//     int freq[26]={0};

//     for(int i=0;i<str.length();i++) {
//         //Tracking part
//         char ch = str[i];
//         freq[ch-'a']++;
//         q.push(ch);
    
//         //Finding the answer
//         while(!q.empty()) {
//             char firstChar = q.front();
//             if(freq[firstChar-'a'] > 1) {
//                 //means this is not the answer
//                 q.pop();
//             }
//             else {
//                 //==1 wala case hai
//                 //We got the answer
//                 cout<<firstChar<<"-->";
//                 break;
//             }
//         }
//         if(q.empty()) {
//             cout<<"#"<<"-->";
//         }
//     }
// }


//Max number in a window of size k

void maxNumber(int *arr,int n,int k) {
    deque<int>dq;
    //process first window
    for(int i=0;i<k;i++) {
        int ele = arr[i];
        while(!dq.empty() && ele > arr[dq.front()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";

    //process reamining window - removal and addition
    for(int i=k;i<n;i++) {
        //removal
        //out of range
        if(!dq.empty() && i - dq.front() >= k) {
            dq.pop_front();
        }
        //removal of smaller element
        int ele = arr[i];
        while(!dq.empty() && ele > arr[dq.back()]) {
            dq.pop_back();
        }
        //addition
        dq.push_back(i);
        cout<<arr[dq.front()]<<" ";
    }
}

int main() {
    int arr[] = {1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    maxNumber(arr,n,k);
}