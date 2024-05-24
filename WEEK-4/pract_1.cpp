#include<iostream>
#include<vector>
using namespace std;

// bool search2D(vector<vector<int>> &matrix,int target) {
//     int row = matrix.size();
//     int col = matrix[0].size();
//     int n = row*col;

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<=e) {
//         int rowIndex = mid/col;
//         int colIndex = mid%col;
//         int currNo = matrix[rowIndex][colIndex];

//         if(currNo==target) {
//             return currNo;
//         }
//         else if(currNo > target) {
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return false;
// }
// int main() {
//     vector<vector<int>> arr {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     int ans = search2D(arr,-12);
//     cout<<ans<<endl;
// }



// double Sqrt(int n) {
//     int s=0,e=n;
//     long long int m=s+(e-s)/2;
//     double ans=-1;
//     while(s<=e) {
//         if(m*m==n) {
//             return m;
//         }
//         else if(m*m < n) {
//             ans=m;
//             s=m+0.1;
//         }
//         else {
//             e=m-0.1;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }
// int main() {
//     int n;
//     cin>>n;
//     double finalAns = Sqrt(n);
//     cout<<finalAns<<endl;
// }

int pivotElement(vector<int> &arr) {
    int s=0;
    int n=arr.size();
    int e=n-1;
    int ans=-1;
    int m = s+(e-s)/2;
    while(s<=e) {
        if(s==e) {
            return s;
        }
        else if(arr[m]<arr[m-1] && m-1>=0) {
            return m-1;
        }
        else if(arr[m+1]<arr[m] && m+1<n) {
            return m;
        }
        else if(arr[s]>arr[m]) {
            e=m-1;
        }
        else {
            s=m+1;
        }
        m=s+(e-s)/2;
    }
}
int binarySearch(vector<int>arr,int target,int s,int e) {
    int n=arr.size();
    int m=s+(e-s)/2;
    while(s<=e) {
        if(arr[m]==target) {
            return m;
        }
        else if(arr[m]>target) {
            e=m-1;
        }
        else {
            s=m+1;
        }
        m=s+(e-s)/2;
    }
}
int main() {
    vector<int>a = {12,14,16,2,4,6,8,10};
    int target = 2;
    int n=a.size();
    int pivotIndex = pivotElement(a);
    int ans=-1;
    if(target>=a[0] && target<=a[pivotIndex]) {
        ans=binarySearch(a,target,0,pivotIndex);
    }
    else {
        ans=binarySearch(a,target,pivotIndex+1,n-1);
    }
    cout<<ans<<endl;
}