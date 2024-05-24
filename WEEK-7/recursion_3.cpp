#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// int checkSortArr(int arr[],int n,int i) {
//     if(i>=n) return 1;
//     if(arr[i+1] >= arr[i]) {
//         checkSortArr(arr,n,i+1);
//     }
//     else {
//         return -1;
//     }
// }
// int binaryRec(int arr[],int n,int s,int e,int key) {
//     int m = s+(e-s)/2;
//     if(s>e) return 0;
//     if(arr[m] == key) return m;
//     if(arr[m] > key) {
//         e=m-1;
//         return binaryRec(arr,n,s,e,key);
//     }
//     if(arr[m] < key) {
//         s=m+1;
//         return binaryRec(arr,n,s,e,key);
//     }
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     cout<<checkSortArr(arr,5,0)<<endl;
//     int foundIndex = binaryRec(arr,5,0,4,3);
//     if(foundIndex) {
//         cout<<"Key found at index: "<<foundIndex<<endl;
//     }
//     else {
//         cout<<"Key not found"<<endl;
//     }
// }

void findSubstring(string str,string op,int i) {
    if(i>=str.length()) {
        cout<<"-> "<<op<<endl;
        return;
    }
    char ch = str[i];
    //exclude
    findSubstring(str,op,i+1);
    //include
    op.push_back(ch);
    findSubstring(str,op,i+1);
    
}
int main() {
    string str = "abc";
    string op = "";
    findSubstring(str,op,0);
}