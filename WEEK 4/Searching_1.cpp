#include<iostream>
using namespace std;
// int binarySearch(int arr[],int n,int key) {
//     int s=0,e=n-1;
//     while(s<=e) {
//         int m = s+(e-s)/2;
//         if(key==arr[m]) {
//             return m;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 2;
//     int ans = binarySearch(arr,n,key);
//     if(ans == -1) {
//         cout<<"Key not found"<<endl;
//     }
//     else {
//         cout<<"Key found at index "<<ans<<endl;
//     }
// }



// int firstOccurence(int arr[],int n,int key) {
//     int s=0,e=n-1,ans=-1;
//     int m=s+(e-s)/2;
//     while(s<=e) {
//         if(key==arr[m]) {
//             ans=m;
//             e=m-1;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }
// int main() {
//     int arr[] = {30,20,0,30,30,30,40,40,50};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 30;
//     int finalAns = firstOccurence(arr,n,key);
//     if(finalAns == -1) {
//         cout<<"Key not found"<<endl;
//     }
//     else {
//         cout<<"Key found at index "<<finalAns<<endl;
//     }
// }



// int lastOccurence(int arr[],int n,int key) {
//     int s=0,e=n-1,ans=-1;
//     int m=s+(e-s)/2;
//     while(s<=e) {
//         if(key==arr[m]) {
//             ans=m;
//             s=m+1;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }
// int main() {
//     int arr[] = {30,20,0,30,30,30,30,40,30};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 30;
//     int finalAns = lastOccurence(arr,n,key);
//     if(finalAns == -1) {
//         cout<<"Key not found"<<endl;
//     }
//     else {
//         cout<<"Key found at index "<<finalAns<<endl;
//     }
// }


// int findMissing(int arr[],int n) {
//     int s=0,e=n-1,ans=-1;
//     int m=s+(e-s)/2;
//     while(s<=e) {
//         int diff = arr[m]-m;
//         if(diff == 1) {
//             s=m+1;
//         }
//         else {
//             ans = m;
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     if(ans+1==0) {
//         return n+1;
//     }
//     return ans+1;
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int n = sizeof(arr)/sizeof(int);
//     int finalAns = findMissing(arr,n);
//     cout<<finalAns<<endl;
// }



int findPeak(int arr[],int n) {
    int s=0,e=n-1,ans=-1;
    int m=s+(e-s)/2;
    while(s<e) {
        if(arr[m]<arr[m+1]) {
            s=m+1;
        }
        else {
            e=m;
        }
        m=s+(e-s)/2;
    }
    return arr[s];
}
int main() {
    int arr[] = {10,20,50,40,30};
    int n = sizeof(arr)/sizeof(int);
    int finalAns = findPeak(arr,n);
    cout<<finalAns<<endl;
}