#include<iostream>
#include<vector>
using namespace std;

// int getQues(int divisor,int dividend) {
//     int s=0,e=dividend,ans;
//     while(s<=e) {
//         int m = s+(e-s)/2;
//         if(m * divisor == dividend) {
//             return m;
//         } 
//         else if(m * divisor < dividend) {
//             ans = m;
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int divisor = 1;
//     int dividend = -35;
    
//     int finalAns = getQues(abs(divisor),abs(dividend));
    

//     if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)) {
//         finalAns = 0-finalAns;
//     }
//     cout<<finalAns<<endl; 
// }



// int nearlySearch(int arr[],int n,int target) {
//     int s=0,e=n-1;
//     while(s<=e) {
//         int m=s+(e-s)/2;
//         if(arr[m-1] == target && m-1>=0) {
//             return m-1;
//         }
//         if(arr[m] == target) {
//             return m;
//         }
//         if(arr[m+1] == target && m+1<=n) {
//             return m+1;
//         }
//         if(target > arr[m]) {
//             s=m+2;
//         }
//         else {
//             e=m-2;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {20,10,30,50,40,70,60};
//     int n = sizeof(arr)/sizeof(int);
//     int target = 703;

//     int found = nearlySearch(arr,n,target);

//     if(found == -1) {
//         cout<<"Element not found"<<endl;
//     }
//     else {
//         cout<<"Element found at index "<<found<<endl;
//     }
// }



int oddOccuring(int arr[],int n) {
    int s=0,e=n-1;
    while(s<=e) {
        int m = s+(e-s)/2;
        if(s==e) {
            return arr[s];
        }
        else if(m&1) {
            if(m-1>=0 && arr[m] == arr[m-1]) {
                s=m+1;
            }
            else {
                e=m-1;
            }
        }
        else {
            if(m+1<n && arr[m] == arr[m+1]) {
                s=m+2;
            }
            else {
                e=m;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {10,10,2,2,3,3,2,5,5,6,6};
    int n = sizeof(arr)/sizeof(int);
    int ans = oddOccuring(arr,n);
    cout<<ans<<endl;
}