 #include<iostream>
 using namespace std;


//BINARY SEARCH
// int binarySearch(int arr[],int key,int n) {
//     int s=0,e=n-1,m=(s+e)/2;
//     while(s<=e) {
//         if(arr[m]==key) {
//             return m;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=(s+e)/2;
//     }
//     return 0;
// }
// int main() {
//     int arr[]={10,20,30,40,50,60,70,80};
//     int n=sizeof(arr)/sizeof(int);
//     int key;
//     cin>>key;
//     int ans = binarySearch(arr,key,n);
//     if(ans) {
//         cout<<ans;
//     }
//     else{
//         cout<<"Key not present";
//     }
// }


//FIRST REPAEATING ELEMENT
// int firstElementSearch(int arr[],int key,int n) {
//     int s=0,e=n-1,m=(s+e)/2,ans=-1;
//     while(s<=e) {
//         if(arr[m]==key) {
//             ans=m;
//             e=m-1;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=(s+e)/2;
//     }
//     return ans;
// }
// int main() {
//     int arr[]={10,20,30,30,30,30,40,40,40,50};
//     int n=sizeof(arr)/sizeof(int);
//     int key;
//     cin>>key;
//     int ans = firstElementSearch(arr,key,n);
//     if(ans != -1) {
//         cout<<ans;
//     }
//     else{
//         cout<<"Key not present";
//     }
// }

//LAST REPAEATING ELEMENT
// int lastElementSearch(int arr[],int key,int n) {
//     int s=0,e=n-1,m=(s+e)/2,ans=-1;
//     while(s<=e) {
//         if(arr[m]==key) {
//             ans=m;
//             s=m+1;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=(s+e)/2;
//     }
//     return ans;
// }
// int main() {
//     int arr[]={10,20,30,30,30,30,40,40,40,50};
//     int n=sizeof(arr)/sizeof(int);
//     int key;
//     cin>>key;
//     int ans = lastElementSearch(arr,key,n);
//     if(ans != -1) {
//         cout<<ans;
//     }
//     else{
//         cout<<"Key not present";
//     }
// }

//TOTAL TIMES ELEMENT REPEATING
// int lastElementSearch(int arr[],int key,int n) {
//     int s=0,e=n-1,m=(s+e)/2,ans=-1;
//     while(s<=e) {
//         if(arr[m]==key) {
//             ans=m;
//             s=m+1;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=(s+e)/2;
//     }
//     return ans;
// }
// int firstElementSearch(int arr[],int key,int n) {
//     int s=0,e=n-1,m=(s+e)/2,ans=-1;
//     while(s<=e) {
//         if(arr[m]==key) {
//             ans=m;
//             e=m-1;
//         }
//         else if(arr[m]>key) {
//             e=m-1;
//         }
//         else if(arr[m]<key) {
//             s=m+1;
//         }
//         m=(s+e)/2;
//     }
//     return ans;
// }
// int main() {
//     int arr[]={10,20,30,30,30,30,40,40,40,50};
//     int n=sizeof(arr)/sizeof(int);
//     int key;
//     cin>>key;
//     int firstEle = firstElementSearch(arr,key,n);
//     int lastEle = lastElementSearch(arr,key,n);
//     int totalNo_Ele = lastEle - firstEle + 1;
//     cout<<totalNo_Ele<<endl; 
// }

//MISSING ELEMENT
// int findMissing(int arr[],int n) {
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;
//     int ans = -1;
//     while(s<=e) {
//         int diff = arr[m] - m;
//         if(diff==1) {
//             s=m+1;
//         }
//         else {
//             ans=m;
//             e=m-1;
//         }
//           if(ans+1==0) {
//            return n+1;
//           }
//         m=s+(e-s)/2;
//     }
//     return ans+1;
// }
// int main() {
//     int arr[]={1,2,3,4,6,7,8,9};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<findMissing(arr,n)<<endl;
// }


//PEAK ELEMENT 

// int peakElement(int arr[],int n) {
//     int s=0,e=n-1,ans=-1;
//     int m = s+(e-s)/2;
//     while(s<e) {
//         if(arr[m]<arr[m+1]) {
//             s=m+1;
//         }
//         else {
//             ans=arr[m];
//             e=m;
//         }
//         m=s+(e-s)/2;
//     }
//     return ans;
// }
// int main() {
//     int arr[]={10,20,30,50,40,20,10};
//     int n=sizeof(arr)/sizeof(int);
//     int finalAns = peakElement(arr,n);
//     cout<<finalAns<<endl;
// }