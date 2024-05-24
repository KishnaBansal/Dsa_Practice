#include<iostream>
using namespace std;
#include<vector>


// //Increasing Order

// void print(vector<int> v,int n) {
//     for(int i=0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }
// }

// void selectionSort(vector<int> nums,int n) {
//     for(int i=0;i<n-1;i++) {
//         int minIndex = i;
//         for(int j=i+1;j<n;j++) {
//             if(nums[j]<nums[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(nums[i],nums[minIndex]);
//     }
//     print(nums,n);
// }

// int main() {
//     vector<int>nums = {44,33,55,22,11};
//     int n = nums.size();
//     selectionSort(nums,n);
// }




// //Decreasing order

// void print(vector<int> v,int n) {
//     for(int i=0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }
// }

// void selectionSort(vector<int> nums,int n) {
//     for(int i=0;i<n-1;i++) {
//         int maxIndex = i;
//         for(int j=i+1;j<n;j++) {
//             if(nums[j]>nums[maxIndex]) {
//                 maxIndex = j;
//             }
//         }
//         swap(nums[i],nums[maxIndex]);
//     }
//     print(nums,n);
// }

// int main() {
//     vector<int>nums = {44,33,55,22,11};
//     int n = nums.size();
//     selectionSort(nums,n);
// }