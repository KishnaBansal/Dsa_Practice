#include<iostream>
#include<vector>
using namespace std;

// int getQuotient(int divisor,int dividend) {
//     int s=0;
//     int e=dividend;
//     int m=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e) {
//         if(m*divisor==dividend) {
//             return m;
//         }
//         else if(m*divisor<dividend) {
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
//     int divisor = 7;
//     int dividend = 35; 
//     int finalAns = getQuotient(abs(divisor),abs(dividend));

//     if((divisor>0 && dividend>0) || (divisor<0 && dividend<0)) {
//         cout<<finalAns<<endl;
//     }
//     else if(divisor == 0) {
//         cout<<"Not Defined"<<endl;
//     }
//     else {
//         cout<<0-finalAns<<endl;
//     }
// }


// int nearlySort(int arr[],int n,int target) {
//     int s=0;
//     int e=n-1;
//     int m= s+(e-s)/2;
//     while(s<=e) {
//         if(m-1>=0 && arr[m-1]==target) {
//             return m-1;
//         }
//         else if(arr[m]==target) {
//             return m;
//         }
//         else if(arr[m+1]==target && m+1<n) {
//             return m+1;
//         }
//         else if(arr[m]>target) {
//             e=m-2;
//         }
//         else {
//             s=m+2;
//         }
//         m=s+(e-s)/2;
//     }
// }
// int main() {
//     int arr[] = {20,10,30,50,40,70,60};
//     int target = 10;
//     int n=sizeof(arr)/sizeof(int);
//     int finalAns = nearlySort(arr,n,target);
//     cout<<finalAns<<endl;
// }

int oddElement(int arr[],int n) {
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e) {
        if(s==e) {
            return s;
        }
        if(m & 1 == 1) {
              if(arr[m]==arr[m-1] && m-1>=0) {
                s=m+1;
            }
            else {
                e=m-1;
            }
        }
        else {
            if(arr[m]==arr[m+1] && m+1<n) {
                s=m+2;
            }
            else {
                e=m;
            }
        }
        m=s+(e-s)/2;
    }
    return -1;
}
int main() {
    int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n=sizeof(arr)/sizeof(int);
    int finalAns = oddElement(arr,n);
    cout<<arr[finalAns]<<endl; 
}
