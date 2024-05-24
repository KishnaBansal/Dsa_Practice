#include<iostream>
using namespace std;


// //Max. sum of non-adjacent elements

// int maxSumRec(int arr[],int i,int n) {
//     //Base Case 
//     if(i>=n) {return 0;}
//     //include
//     int op1 = arr[i] + maxSumRec(arr,i+2,n);
//     //exclude
//     int op2 = 0 + maxSumRec(arr,i+1,n); 
//     int ans = max(op1,op2);
//     return ans;
// }

// int main() {
//     int arr[] = {2,4,1,6,8,5,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int finalAns = maxSumRec(arr,0,n);
//     cout<<finalAns<<endl;
// }


// //Count Dearrangements

// int solve(int n) {
//     //Base Case
//     if(n==1) {return 0;}
//     if(n==2) {return 1;}

//     int ans = (n-1) * (solve(n-2) + solve(n-1));
//     return ans;
// }

// int main() {
//     //int arr[] = {1,2,3,4};
//     int n = 5;
//     cout<<solve(n)<<endl;

// }

int paintFence(int n,int k) {
    //Base Case
    if(n==1) {
        return k;
    }
    if(n==2) {
        return k + k*(k-1);
    }
    int ans = (k-1) * (paintFence(n-2,k) + paintFence(n-1,k));
    return ans;
}

int main() {
    int n = 3;
    int k = 3;
    int ans = paintFence(n,k);
    cout<<ans<<endl;
}