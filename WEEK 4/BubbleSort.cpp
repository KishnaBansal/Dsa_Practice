#include<iostream>
using namespace std;
#include<vector>


// //Increasing Order

// void print(vector<int> v,int n) {
//     for(int i=0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }
// }

// void bubbleSort(vector<int> nums,int n) {
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             if(nums[j]>nums[j+1]) {
//                 swap(nums[j],nums[j+1]);
//             }
//         }
//     }
//     print(nums,n);
// }

// int main() {
//     vector<int>nums = {5,4,2,3,1,78};
//     int n = nums.size();
//     bubbleSort(nums,n);
// }




// //Decreasing Order

// void print(vector<int> v,int n) {
//     for(int i=0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }
// }

// void bubbleSort(vector<int> nums,int n) {
//     for(int i=0;i<n-1;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             if(nums[j]<nums[j+1]) {
//                 swap(nums[j],nums[j+1]);
//             }
//         }
//     }
//     print(nums,n);
// }

// int main() {
//     vector<int>nums = {5,4,2,3,1,78};
//     int n = nums.size();
//     bubbleSort(nums,n);
// }