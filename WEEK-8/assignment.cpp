#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Count Inversions

// int merge(int arr[],int n,int s,int e,int m,vector<int>&temp) {
//     int i = s;
//     int j = m+1;
//     int k = s;
//     int invCount = 0;
//     while(i<=m && j<=e) {
//         if(arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         }
//         else {       //arr[i] > arr[j] i.e.,CountInversion case
//             temp[k++] = arr[j++];
//             invCount = m-i+1;
//         }
//     }
//     while(i<=m) {
//         temp[k++] = arr[i++];
//     }
//     while(j<=e) {
//         temp[k++] = arr[j++];
//     }

//     while(s<=e) {
//         arr[s] = temp[s];
//         s++;
//     }
//     return invCount;
// }

// int count_MergeSort(int arr[],int n,int s,int e,vector<int>&temp) {
//     //Base Case
//     if(s>=e) {
//         return 0;
//     }
//     int m =s+(e-s)/2;
//     int invCount = 0;
//     invCount += count_MergeSort(arr,n,s,m,temp);
//     invCount += count_MergeSort(arr,n,m+1,e,temp);
//     invCount += merge(arr,n,s,e,m,temp);
//     return invCount;
// }

// // int count_BruteForce(int arr[],int n) {
// //     int invCount = 0;
// //     for(int i=0;i<n;i++) {
// //         for(int j = i+1;j<n;j++) {
// //             if(arr[i]  > arr[j]) {
// //                 invCount++;
// //             }
// //         }
// //     }
// //     return invCount;
// // }

// int main() {
//     int arr[] = {2,4,1,3,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // int ans = count_BruteForce(arr,n);
//     // cout<<ans<<endl;
//     int s = 0;
//     int  e= n-1;
//     vector<int>temp(n,0);
//     int invCount = 0;
//     invCount = count_MergeSort(arr,n,s,e,temp);
//     cout<<invCount<<endl;
// }


// //In-Place Merge Sort
// void merge(vector<int>&v,int n,int s,int m,int e) {
//     int total_len = e-s+1;
//     int gap = (total_len/2) + (total_len%2);
//     while(gap > 0) {
//         int i = s;
//         int j = i + gap;
//         while(j<=e) {
//             if(v[i] > v[j]) {
//                 swap(v[i],v[j]);
//             }
//             i++;j++;
//         }
//         gap = gap <= 1 ? 0 : ((gap/2) + (gap%2));
//     }
// }

// void mergeSort(vector<int>&v,int n,int s,int e) {
//     //Base Case
//     if(s>=e) {
//         return;
//     }
//     int m = s+(e-s)/2;
//     //Divide
//     mergeSort(v,n,s,m);
//     mergeSort(v,n,m+1,e);
//     //Conquer
//     merge(v,n,s,m,e);
// }

// int main() {
//     vector<int>v{1,2,8,9,12,13,3,4,7,10};
//     int n = v.size();
//     mergeSort(v,n,0,n-1);
//     for(int i = 0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }
// }


//Max SubArray 

//Using Kadane's Algorithm
int main() {
    vector<int>nums{-2,-3,4,-1,-2,1,5,-3};
    int ans = INT_MIN;
    int n = nums.size();
    int sum = 0;
    int start = -1,ansStart = -1,ansEnd = -1;
    for(int i = 0;i<n;i++) {
        if(sum == 0) {
            start = i;
        }
        sum += nums[i];
        if(ans < sum) {
            ans = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    cout<<ans<<endl;
    for(int i = ansStart;i<ansEnd;i++) {
        cout<<nums[i]<<" ";
    }
}