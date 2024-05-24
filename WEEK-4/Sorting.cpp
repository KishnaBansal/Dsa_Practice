#include<iostream>
#include<vector>
using namespace std;


//INCREASING ORDER
// int main() {
//     int arr[] = {2,3,4,5,1};
//     int n=5;
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             if(arr[j]>arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
//DECREASING ORDER
// int main() {
//     int arr[] = {2,3,4,5,1};
//     int n=5;
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             if(arr[j]<arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// int main() {
//     int arr[] = {22,33,44,55,11};
//     int n=5;
//     for(int i=0;i<n-1;i++) {
//         int minIndex = i;
//         for(int j=i+1;j<n;j++) {
//             if(arr[j]<arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// int main() {
//     int arr[] = {22,33,44,55,11};
//     int n=5;
//     for(int i=1;i<n;i++) {
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key) {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


