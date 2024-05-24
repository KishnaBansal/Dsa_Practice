#include<iostream>
#include<vector>
using namespace std;

// int pivotElement(int a[],int n) {
//     int s=0,e=n-1,m;
//     while(s<e) {
//         m=s+(e-s)/2;
//         if(s==e) {
//             return s;
//         }
//         else if(m-1>=0 && a[m]<a[m-1]) {
//             return m-1;
//         }
//         else if(m+1<n && a[m]>a[m+1]) {
//             return m;
//         }
//         else {
//             if(a[s]>a[m]) {
//                 e=m-1;
//             }
//             else {
//                 s=m+1;
//             }
//         }
//     }
//     return -1;
// }

// int binarySearch(int a[],int n,int s,int e,int key) {
//     while(s<=e) {
//         int m=s+(e-s)/2;
//         if(a[m]==key) {
//             return m;
//         }
//         else if(a[m]>key) {
//             e=m-1;
//         }
//         else {
//             s=m+1;
//         }
//     }
//     return -1;
// }

// int search(int arr[],int n,int key) {
//     int finalAns = -1;
//     int pivot = pivotElement(arr,n);
//     if(key >= arr[0] && key<=arr[pivot]) {
//         finalAns = binarySearch(arr,n,0,pivot,key);
//     }
//     else {
//         finalAns = binarySearch(arr,n,pivot+1,n-1,key); 
//     }
//     return finalAns;
// }

// int main() {
//     int arr[] = {1,3};
//     int n = sizeof(arr)/sizeof(int);
//     int key = 0;
//     int ANS = search(arr,n,key);
//     cout<<pivotElement(arr,n)<<endl;
//     if(ANS == -1) {
//         cout<<"Key not found"<<endl;
//     }
//     else {
//         cout<<ANS<<endl;
//     }
    

// }


// int sqrt(int n) {
//     int s=0,e=n,ans;
//     while(s<=e) {
//         long long int m = s+(e-s)/2;
//         if(m*m == n) {
//             return m;
//         }
//         else if(m*m < n) {
//             ans=m;
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin>>n;
//     int ans = sqrt(n);
//     cout<<ans<<endl;
// }



int search2(int arr[][50],int row,int col,int target) {
    int n = row*col;
    int s=0,e=n-1;
    while(s<=e) {
        int m = s+(e-s)/2;
        int rowIndex = m/col;
        int colIndex = m%col;
        int currNo = arr[rowIndex][colIndex];

        if(currNo == target) {
            return 1;
        }
        else if(currNo < target) {
            s=m+1;
        }
        else {
            e=m-1;
        }
    }
    return 0;
}

int main() {
    int arr[50][50] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int key = 35;
    //int n= sizeof(arr)/sizeof(int);
    if(search2(arr,3,3,key)==1) {
        cout<<"Found"<<endl;
    }
    else {
        cout<<"Not found"<<endl;
    }
}