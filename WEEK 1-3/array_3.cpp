#include<iostream>
using namespace std;


// int main() {
//     int arr[3][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };

//     int brr[][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };

//     int crr[][] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     }

//------------------------------------------------------

// void print(int arr[][4],int row,int col) {
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// void colwisePrint(int arr[][4],int row,int col) {
//     for(int i=0;i<col;i++) {
//         for(int j=0;j<row;j++) {
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     int arr[3][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int row = 3;
//     int col = 4;
//     print(arr,row,col);
//     cout<<endl;
//     colwisePrint(arr,row,col);
// }
 
//------------------------------------------------------

// int main() {
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             cout<<"Enter row: "<<i<<" Enter col: "<<j<<endl;
//             cin>>arr[i][j];
//         }
//     }
// }

//---------------------------------------------------------------------

// bool find(int arr[][4],int row,int col,int key) {
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             if(arr[i][j]==key) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main() {
//     int arr[3][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int row=3,col=4;
//     int key;
//     cin>>key;
//     bool check=find(arr,row,col,key);
//     if(check) {
//         cout<<("Found");
//     }
//     else {
//         cout<<"Not Found";
//     }
// }

//-------------------------------------------------------------------

// #include<limits.h>

// int findMax(int arr[][4],int row,int col) {
//     int maxAns = INT_MIN;
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             if(arr[i][j]>maxAns) {
//                 maxAns=arr[i][j];
//             }
//         }
//     }
//     return maxAns;
// }
// int findMin(int arr[][4],int row,int col) {
//     int minAns = INT_MAX;
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             if(arr[i][j]<minAns) {
//                 minAns=arr[i][j];
//             }
//         }
//     }
//     return minAns;
// }
// int main() {
//     int arr[3][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int row=3,col=4;
//     int maxNum = findMax(arr,row,col);
//     cout<<maxNum<<endl;
//     int minNum = findMin(arr,row,col);
//     cout<<minNum<<endl;
// }

//-------------------------------------------------------------

// void sumRowwise(int arr[][4],int row,int col) {
//     for(int i=0;i<row;i++) {
//         int sum=0;
//         for(int j=0;j<col;j++) {
//             sum += arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
// int main() {
//     int arr[3][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int row=3,col=4;
//     sumRowwise(arr,row,col);
// }

//---------------------------------------------------------

// void sumRowwise(int arr[][3],int row,int col) {
//     for(int i=0;i<row;i++) {
//         for(int j=i;j<col;j++) {
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     int arr[3][3] = {
//         {1,2,3},
//         {5,6,7},
//         {9,10,11}
//     };
//     int row=3,col=3;
//     sumRowwise(arr,row,col);
// }