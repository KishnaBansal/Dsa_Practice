#include<iostream>
#include<vector>
using namespace std;


// int pivotMax(int arr[],int n) {
//     int s=0,e=n-1,m=s+(e-s)/2;
//     while(s<=e) {
//         if(s==e) {
//             return s;
//         }
//         if(m+1<n && arr[m]>arr[m+1]) {
//             return m;
//         }
//         else if(m-1>=0 && arr[m-1]>arr[m]) {
//             return m-1;
//         }
//         else if(arr[s]<=arr[m]) {
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     } 
// }

// int binarySearch(int arr[],int s,int e,int target) {
//     int m=s+(e-s)/2;
//     while(s<=e) {
//         if(arr[m]==target) {
//             return m;
//         }
//         else if(arr[m]<target) {
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     return -1;
// } 

// int main() {
//     int arr[]={1,3};
//     int n=sizeof(arr)/sizeof(int);
//     int target = 1;
//     int PivotIndex = pivotMax(arr,n);
//     int ans=-1;
//     if(target>=arr[0] && target<=arr[PivotIndex]) {
//         ans = binarySearch(arr,0,PivotIndex,target);
//     }
//     else {
//         ans = binarySearch(arr,PivotIndex+1,n-1,target);
//     }
//     cout << ans << endl;

// }


// int Sqrt(int n) {
//     int s=0,e=n;
//     long long int m=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e) {
//         if(m*m==n) {
//             return m;
//         }
//         else if(m*m < n) {
//             ans=m;
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }
// int main() {
//     int n;
//     cin>>n;
//     int finalAns = Sqrt(n);
//     cout<<finalAns<<endl;
// }


//Searching in 2d array
bool search2D(vector<vector<int>> &matrix,int target) {
    int row = matrix.size();
    int col = matrix[0].size();
    int n = row*col;

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int currNo = matrix[rowIndex][colIndex];

        if(currNo==target) {
            return currNo;
        }
        else if(currNo > target) {
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main() {
    vector<vector<int>> arr {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int ans = search2D(arr,-12);
    cout<<ans<<endl;
}