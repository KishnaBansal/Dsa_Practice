#include<iostream>
using namespace std;

//------------------------------------------

// int main() {
//     int arr[]={23,-7,-12,-10,40,60};
//     int j=0;
//     for(int index=0;index<6;index++) {
//         if(arr[index]<0) {
//             swap(arr[j],arr[index]);
//             j++;
//         }
//     }
//     for(int i=0;i<6;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

//-------------------------------------------

// int main() {
//     int arr[]={1,0,2,2,1,0,1,0};
//     int size=8,index=0;
//     int left=0,right=size-1;
//     // for(int index=0;index<=right;) {
//     //     if(arr[index]==0) {
//     //         swap(arr[left],arr[index]);
//     //         left++;
//     //         index++;
//     //     }
//     //     else if(arr[index]==2) {
//     //         swap(arr[right],arr[index]);
//     //         right--;
//     //     }
//     //     else {
//     //         index++;
//     //     }
//     // }

//     while(index<=right) {
//         if(arr[index]==0) {
//             swap(arr[left],arr[index]);
//             left++;
//             index++;
//         }
//         else if(arr[index]==2) {
//             swap(arr[right],arr[index]);
//             right--;
//         }
//         else {
//             index++;
//         }
//     }
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

//----------------------------------------------------------------

//int main() {
//     int arr[]={10,20,30,40,50,60};
//     int brr[100];
//     int size=6;
//     int k;
//     cin>>k;
//     for(int index=0;index<size;index++) {
//         int newIndex = (index+k)%size;
//         brr[newIndex]=arr[index];
//     }
//     for(int i=0;i<size;i++) {
//         cout<<brr[i]<<" ";
//     }
// }

//------------------------------------------------------------------

// int main() {
//     int arr[]={3,0,1};
//     int size=3;    
//     int sum=0;
//     for(int i=0;i<size;i++) {
//         sum +=arr[i];
//     }
//     int totalSum=(size*(size+1))/2;
//     int ans=totalSum-sum;
//     cout<<ans<<endl;
// }

//---------------------------------------------------------------------

// #include<limits.h>
// int main() {
//     int arr[2][2]={
//         {0,1},
//         {1,1}
//     };
//     int col=2,row=2;
//     int rowNo = 0;
//     int c1=INT_MIN;
//     for(int i=0;i<row;i++) {
//         int count=0;
//         for(int j=0;j<col;j++) {
//             if(arr[i][j]==1) {
//                 count++;
//             }
//         }
//         if(count>c1) {
//             c1=count;
//             rowNo=i;
//         }
//     }
//     cout<<rowNo<<" "<<c1<<endl;
// }

//-------------------------------------------------------------------
// void rev(int arr,int)
// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row=3,col=3;
//     for(int i=0;i<row;i++) {
//         for(int j=i;j<col;j++) {
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<row;i++) {
//         reverse(arr,arr+row);
//     }
// }