#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int firstOccurence(int arr[],int n) {
//     int s=0;int e=n-1;
//     while(s<=e) {
//         int m = s + (e-s)/2;
        
//     }
// }

// int main() {
//     int arr[] = {1,1,1,2,2,2,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
// }

// int ans(int arr[],int n) {
//     int s=0;int e=n-1;
//     int m = s+(e-s)/2;
//     return arr[m];
// }

// int main() {
//     int arr[] = {1,1,1,2,2,2,2};
//     int n = sizeof(arr)/sizeof(int);
//     int finalAns = ans(arr,n);
//     cout<<finalAns<<endl;
// }

int main() {
    vector<int>v = {1,1,1,2,2,2,2};

    //Prints element not index
    auto it = lower_bound(v.begin(),v.end(),2);
    cout<<*it<<endl;
    cout<<"Index is: " << it - v.begin()<<endl;
    auto it2 = upper_bound(v.begin(),v.end(),2) - 1;
    cout<<*it2<<endl;
    cout<<"Index is: " << it2 - v.begin()<<endl;
}