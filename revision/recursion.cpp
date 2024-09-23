#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


// int fact(int n) {
//     if(n==0 || n==1) {
//         return 1;
//     }
//     int ans = n * fact(n-1);
//     return ans;
// }

// int fibo(int n) {
//     if(n==1) {return 0;}
//     if(n==2) {return 1;}
//     int ans = fibo(n-1) + fibo(n-2);
//     return ans;
// }

// int revCount(int n) {
//     if(n==1) {
//         cout<<1<<" ";
//         return 0;
//     }
//     cout<<n<<" ";
//     revCount(n-1);
// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<revCount(10)<<endl;
//     cout<<fact(n);
// }

//Lecture 2

// int searchArr(int arr[],int n,int i,int key) {
//     if(i>=n) {return -1;}
//     if(arr[i] == key) {return i;}
//     searchArr(arr,n,i+1,key);
// }

// int minNo(int arr[],int n,int i,int min) {
//     if(i>=n) {return min;}
//     // int min = INT_MAX;
//     if(arr[i] < min) {
//         min = arr[i];
//     }
//     minNo(arr,n,i+1,min);
// }

// void storeEvenNo(int arr[],vector<int>&v,int n,int i) {
//     if(i>=n) {return;}
//     if(!(arr[i] & 1)) {v.push_back(arr[i]);}
//     storeEvenNo(arr,v,n,i+1);
// }

// void printDig(int n) {
//     if(n<=0) {return;}
//     int dig = n % 10;
//     n = n / 10;
//     printDig(n);
//     cout<<dig<<" ";
// }

// int main() {
//     int arr[] = {2,4,5,6,7};
//     int key = 5;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int min = INT_MAX;
//     vector<int>v;

//     // int ans = searchArr(arr,n,0,key);
//     // if(ans == -1) {cout<<"Key not found";}
//     // else {cout<<"Key found at index: "<<ans;}

//     // int ans = minNo(arr,n,0,min);
//     // cout<<"Minimum number in an array is: "<<ans;

//     // storeEvenNo(arr,v,n,0);
//     // for(int i = 0;i<v.size();i++) {
//     //     cout<<v[i]<<" ";
//     // }

//     printDig(3456);

//     return 0;
// }

//Lecture 3

bool checkArrSorted(int arr[],int n,int i) {
    if(i>=n) {return 1;}
    if(arr[i] < arr[i+1]) {
        checkArrSorted(arr,n,i+1);
    }
    else {
        return 0;
    }
} 

int binarySearch(int arr[],int n,int i,int s,int e,int key) {
    if(s>e) {return -1;}
    int m = s+(e-s)/2;
    if(arr[m] == key) {return m;}
    if(arr[m] < key) {
        s=m+1;
        binarySearch(arr,n,i+1,s,e,key);
    }
    else {
        e=m-1;
        binarySearch(arr,n,i+1,s,e,key);
    }

}

void subSeqString(string str,int i,string op) {
    if(i>=str.length()) {
        cout<<op<<endl;
        return;
    }
    char ch = str[i];
    //exclude
    subSeqString(str,i+1,op);
    //include
    op.push_back(ch);
    subSeqString(str,i+1,op);
}

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    string op;
    string str = "abc";
    subSeqString(str,0,op);


    // bool ans = checkArrSorted(arr,n,0);
    // if(ans) {
    //     cout<<"Array is sorted"<<endl;
    // }
    // else {
    //     cout<<"Array is not sorted"<<endl;
    // }

    // int s = 0,key=10;
    // int e = n-1;
    // int ans = binarySearch(arr,n,0,s,e,key);
    // if(ans == -1) {cout<<"Key not found";}
    // else {
    //     cout<<"Key found at index: "<<ans<<endl;
    // }
}