#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// void merge(int arr[],int n,int s,int e) {
//     int m = s + (e-s)/2;
//     int leftLength = m-s+1;
//     int rightLength = e-m;
//     //Dynamically creating two arrays
//     int *leftArray = new int[leftLength];
//     int *rightArray = new int[rightLength];
//     //Storing values in them
//     int k = s;
//     for(int i = 0;i<leftLength;i++) {
//         leftArray[i] = arr[k];
//         k++;
//     }
//     k = m+1;
//     for(int i = 0;i<rightLength;i++) {
//         rightArray[i] = arr[k];
//         k++;
//     }
//     // Main merging starts here
//     int leftIndex=0,rightIndex=0,mainArrayIndex=s;
//     while(leftIndex < leftLength && rightIndex < rightLength) {
//         if(leftArray[leftIndex] < rightArray[rightIndex]) {
//             arr[mainArrayIndex] = leftArray[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//         }
//         else {
//             arr[mainArrayIndex] = rightArray[rightIndex];
//             mainArrayIndex++;
//             rightIndex++;
//         }
//     }
//     while(leftIndex < leftLength) {
//         arr[mainArrayIndex] = leftArray[leftIndex];
//         mainArrayIndex++;
//         leftIndex++;
//     }
//     while(rightIndex < rightLength) {
//         arr[mainArrayIndex] = rightArray[rightIndex];
//         mainArrayIndex++;
//         rightIndex++;
//     }
//     delete[] leftArray;
//     delete[] rightArray;
// }
// void mergeSort(int arr[],int n,int s,int e) {
//     //Base Case
//     if(s>=e) {
//         return;
//     }
//     //break
//     int m = s+(e-s)/2;
//     mergeSort(arr,n,s,m);
//     mergeSort(arr,n,m+1,e);
//     //merge two arrays
//     merge(arr,n,s,e);
// }
// int main() {
//     int arr[] = {2,4,3,54,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(arr,n,0,n-1);
//     for(int i = 0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// void subSequence(string &str) {
//     int num_sub = pow(2,str.size());
//     for(int n = 0;n < num_sub;n++) {
//         string op;
//         int num = n;
//         int i = 0;
//         while(num) {
//             int b = (num & 1);
//             if(b) {
//                 op.push_back(str[i]);
//                 i++;
//             }
//             else {
//                 i++;
//             }
//             num >>= 1;
//         }
//         cout<<op<<" ";
//         cout<<endl;
//     }
// }
// int main() {
//     string str = "abc";
//     subSequence(str);
// }

// void quickSort(int arr[],int s,int e) {
//     //Base Case
//     if(s > e) {
//         return;
//     }
//     int i = s-1;
//     int j = s;
//     int p = e;
//     while(j < p) {
//         if(arr[j] < arr[p]) {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//         j++;
//     }
//     i++;
//     swap(arr[i],arr[p]);
//     quickSort(arr,s,i-1);
//     quickSort(arr,i+1,e);
// }
// int main() {
//     int arr[] = {7,2,1,8,6,3,5,4};
//     int n  = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr,0,n-1);
//     for(int i = 0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


void permString(string str,int i) {
    //Base Case
    if(i >= str.size()) {
        cout<<str<<endl;
        return;
    }
    for(int j = i;j<str.length();j++) {
        //Processing
        swap(str[i],str[j]);
        permString(str,i+1);
    }
}

int main() {
    string str = "abc";
    int i = 0;
    permString(str,i);
}