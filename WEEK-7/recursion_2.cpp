#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// void printArr(int arr[],int n,int i) {
//     // if(i == n-1) {
//     //     cout<<arr[n-1]<<endl;
//     //     return;
//     // }
//     // cout<<arr[i]<<endl;
//     // printArr(arr,n,i+1);
//     if(i >= n) {
//         return;
//     }
//     cout<<arr[i]<<endl;
//     printArr(arr,5,i+1);

// } 
// void searchArr(int arr2[],int n,int i,int key) {
//     if(arr2[i] == key) {
//         cout<<"Index: "<<i<<" "<<endl;
//     }
//     if(i>=n) {
//         return;
//     }
//     searchArr(arr2,n,i+1,key);
// }
// void minNoArr(int arr[],int n,int i,int &mini) {
//     if(i>=n) return;
//     mini = min(mini,arr[i]);
//     minNoArr(arr,n,i+1,mini);
// }
// void evenStore(int arr[],vector<int>&v,int n,int i) {
//     if(i>=n) return;
//     if(!(arr[i] & 1)) v.push_back(arr[i]);
//     evenStore(arr,v,n,i+1); 
// }
// void doubleArr(int arr[],int n,int i) {
//     if(i>=n) return;
//     arr[i] = 2*arr[i];
//     doubleArr(arr,n,i+1);
// }
// void maxNoArr(int arr[],int n,int i,int &maxi) {
//     if(i>=n) return;
//     maxi = max(maxi,arr[i]);
//     maxNoArr(arr,n,i+1,maxi);
// }
// void NoToDigit(int num) {
//     if(num==0) return;
//     int dig = num % 10;
//     //num = num/10;
//     NoToDigit(num/10);
//     cout<<dig<<" ";
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int arr2[] = {1,2,1,3};
//     printArr(arr,5,0);
//     searchArr(arr2,5,0,2);
//     // int mini = INT_MAX;
//     // minNoArr(arr,5,0,mini);
//     // // vector<int>v;
//     // // evenStore(arr,v,5,0);
//     // // // for(int i = 0;i<v.size();i++) {
//     // // //     cout<<v[i]<<" ";
//     // // // }
//     // // for(int i : v) {   //For-Each
//     // //     cout<<i<<" ";
//     // // }
//     // // cout<<endl;
//     // // doubleArr(arr,5,0);
//     // // for(int i : arr) {
//     // //     cout<<i<<" ";
//     // // }
//     // // cout<<endl;
//     // int maxi = INT_MIN;
//     // maxNoArr(arr,5,0,maxi);
//     int num = 4512;
//     NoToDigit(num);
// }


// void vectorToInt(vector<int>&v,int n,int i,int num) {
//     if(i>=n) return;
//     num = num*10 + v[i];
//     vectorToInt(v,n,i+1,num);
//     cout<<num<<endl;
// }
// int main() {
//     vector<int>v{4,2,1,5};
//     int n = v.size();
//     vectorToInt(v,n,0,0);
// }


void search(string str,int n,int i,char key,vector<int>&v) {
    if(i>=n) return;
    if(str[i] == key) {
        cout<<"Index: "<<i<<endl;
        v.push_back(i);
    }
    search(str,n,i+1,key,v);
}
int main() {
    string str = "babbar";
    int n = str.size();
    vector<int>v;
    search(str,n,0,'a',v);
    for(int i : v) {
        cout<<i<<" ";
    }
}