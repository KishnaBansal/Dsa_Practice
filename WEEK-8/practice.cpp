#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// void printPermutations(string &str,int i) {
//     if(i>=str.length()) {
//         cout<<str<<endl;
//         return;
//     }
//     for(int j=i;j<str.length();j++) {
//         swap(str[i],str[j]);
//         //Recursion
//         printPermutations(str,i+1);
//         //Backtracking
//         swap(str[i],str[j]);
//     }
// }

// int main() {
//     string str = "abc";
//     int i = 0;
//     printPermutations(str,i);
// }


// //Rat in a Maze

// bool isSafe(int maze[][4],int row,int col,int srcx,int srcy,int newx,int newy,vector<vector<bool>> &visited) {
//     if((maze[newx][newy] == 1) &&
//         (newx >= 0 && newx < row) && (newy >= 0 && newy < col) &&
//         (visited[newx][newy] == false)
//     ) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string op,vector<vector<bool>> &visited) {
//     //Base Case
//     if((srcx == row-1) && (srcy == col-1)) {
//         cout<<op<<endl;
//         return;
//     }

//     //UP
//     int newx = srcx - 1;
//     int newy = srcy;
//     if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)) {
//         visited[newx][newy] = true;
//         printAllPaths(maze,row,col,newx,newy,op + 'U',visited);
//         visited[newx][newy] = false;
//     } 
//     //DOWN
//     newx = srcx + 1;
//     newy = srcy;
//     if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)) {
//         visited[newx][newy] = true;
//         printAllPaths(maze,row,col,newx,newy,op + 'D',visited);
//         visited[newx][newy] = false;
//     }
//     //RIGHT
//      newx = srcx;
//      newy = srcy + 1;
//     if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)) {
//         visited[newx][newy] = true;
//         printAllPaths(maze,row,col,newx,newy,op + 'R',visited);
//         visited[newx][newy] = false;
//     }
//     //LEFT
//      newx = srcx;
//      newy = srcy - 1;
//     if(isSafe(maze,row,col,srcx,srcy,newx,newy,visited)) {
//         visited[newx][newy] = true;
//         printAllPaths(maze,row,col,newx,newy,op + 'L',visited);
//         visited[newx][newy] = false;
//     }
// }

// int main() {
//     int maze[4][4] = {
//         {1,0,0,0},
//         {1,1,0,0},
//         {1,1,1,0},
//         {1,1,1,1}
//     };
//     int row = 4;
//     int col = 4;

//     int srcx = 0;
//     int srcy = 0;
//     string op = "";

//     vector<vector<bool>> visited(row,vector<bool>(col,false));
//     if(maze[0][0] == 0) {
//         cout<<"No position exists"<<endl;
//     }
//     else {
//         visited[srcx][srcy] = true;
//         printAllPaths(maze,row,col,srcx,srcy,op,visited);
//     }
// }


// //Merge Sort

// void merge(int arr[],int s,int e) {
//     int m = (s+e)/2;

//     int leftArrLen = m-s+1;
//     int rightArrLen = e-m;

//     int *leftArr = new int[leftArrLen];
//     int *rightArr = new int[rightArrLen];

//     int k = s;
//     for(int i = 0;i<leftArrLen;i++) {
//         leftArr[i] = arr[k];
//         k++;
//     }
//     k = m+1;
//     for(int i = 0;i<rightArrLen;i++) {
//         rightArr[i] = arr[k];
//         k++;
//     }

//     int li = 0;
//     int ri = 0;
//     int mai = s;

//     //Merge happens here
//     while(li<leftArrLen && ri<rightArrLen) {
//         if(leftArr[li] < rightArr[ri]) {
//             arr[mai] = leftArr[li];
//             mai++;
//             li++;
//         }
//         else {
//             arr[mai] = rightArr[ri];
//             mai++;
//             ri++;
//         }
//     }
//     //Exhausting conditions 
//     while(li < leftArrLen) {
//         arr[mai] = leftArr[li];
//         mai++;
//         li++;
//     }
//     while(ri < rightArrLen) {
//         arr[mai] = rightArr[ri];
//         mai++;
//         ri++;
//     }
//     //Deleting elements
//     delete[] leftArr;
//     delete[] rightArr;
// }

// void mergeSort(int arr[],int n,int s,int e) {
    
//     //Base Case
//     if(s>=e) {
//         return;
//     }
//     //break
//     int m = (s+e)/2;
//     //Recursion
//     //Left Part
//     mergeSort(arr,n,s,m);
//     //Right Part
//     mergeSort(arr,n,m+1,e);
//     //Merge two arrays
//     merge(arr,s,e);
// }

// int main() {
//     int arr[] = {2,1,6,9,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = n-1;
//     for(int i =0 ;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(arr,n,s,e);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

//Subsequence of a String

// void subSeq(string &str) {
//     int num_subs = pow(2,str.size());
//     for(int n = 0;n<num_subs;n++) {
//         int num = n;
//         string op;
//         int i = 0;
//         while(num) {
//             int b = (num & 1);
//             if(b) {
//                 op.push_back(str[i]);
//                 i++;
//             } 
//             num >>= 1;
//         }
//         cout<<op<<endl;
//     }
// } 

// int main() {
//     string str = "abc";
//     subSeq(str);
// }

// //Quick Sort

// void quickSort(int arr[],int s,int e) {
//     int i = s-1;
//     int j = s;
//     int pivot = e;
//     //Base Case
//     if(s>=e) {
//         return;
//     }
//     //Processing
//     while(j < pivot) {
//         if(arr[j] < arr[pivot]) {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//         j++;
//     }
//     i++;
//     swap(arr[pivot],arr[i]);
//     quickSort(arr,s,i-1);
//     quickSort(arr,i+1,e);
// }

// int main() {
//     int arr[] = {2,5,3,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = n-1;
//     quickSort(arr,s,e);
//     for(int i = 0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


// //Permutation of a Substring

// void subStr(string str,int i) {
//     //Base Case
//     if(i>=str.length()) {
//         cout<<str<<endl;
//         return;
//     }
//     for(int j=i;j<str.length();j++) {
//         swap(str[i],str[j]);
//         subStr(str,i+1);
//     }
// }

// int main() {
//     string str = "abc";
//     int i = 0;
//     subStr(str,i);
// }