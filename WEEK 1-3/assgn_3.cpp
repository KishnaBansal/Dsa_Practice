#include<iostream>
#include<vector>
using namespace std;
// int main() {
//     // int arr[5] = {1,2,3,4,5};
//     // cout<<sizeof(arr)/sizeof(int)<<endl;
//     int n=5;
//     int &k=n;
//     int &c=k;
//     cout<<n<<" "<<k<<" "<<c<<endl;
//     k++;
//     cout<<n<<" "<<k<<" "<<c<<endl;
// }


//SORT COLORS

//int main() {
    // //count method
    // vector<int>v={2,0,2,1,1,0};
    // int n=v.size();
    // int c0,c1,c2;
    // c0=c1=c2=0;
    // for(int i=0;i<n;i++) {
    //     if(v[i]==0) {
    //         c0++;
    //     }
    //     else if(v[i]==1) {
    //         c1++;
    //     }
    //     else {
    //         c2++;
    //     }
    // } 
    // int i=0;
    // while(c0--) {
    //     v[i]=0;
    //     i++;
    // }
    // while(c1--) {
    //     v[i]=1;
    //     i++;
    // }
    // while(c2--) {
    //     v[i]=2;
    //     i++;
    // }
    // for(int j=0;j<n;j++) {
    //     cout<<v[j]<<" ";
    // }


//     //3 pointer approach

//     vector<int>v={1,1,0,2,0,1,2,0};
//     int n=v.size();
//     int index=0,r=n-1,l=0;
//     while(index<=r) {
//         if(v[index]==0) {
//             swap(v[l],v[index]);
//             l++;
//             index++;
//         }
//         else if(v[index]==2) {
//             swap(v[r],v[index]);
//             r--;
//         }
//         else{
//             index++;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }

// }


//MISSING NUMBER

//int main() {
 //   //TOTALSUM
    // vector<int>v={9,6,4,2,3,5,7,0,1};
    // int n=v.size();
    // int sum=0;
    // for(int i=0;i<n;i++) {
    //     sum=sum+v[i];
    // }
    // int totalSum=0;
    // totalSum=(n*(n+1))/2;
    // int ans=totalSum-sum;
    // cout<<ans<<endl;

//     //XOR
//     vector<int>v={9,6,4,2,3,5,7,0,1};
//     int n=v.size(),ans=0;
//     for(int i=0;i<n;i++) {
//         ans^=v[i];
//     }
//     for(int i=0;i<=n;i++) {
//         ans ^= i;
//     }
//     cout<<ans<<endl;
// }


//NEGATIVE TO LEFT

//int main() {
     //MY METHOD
    // vector<int>v={1,2,-3,4,-5,6};
    // int n=v.size();
    // int l=0;
    // for(int i=0;i<n;) {
    //     if(v[i]<0) {
    //         swap(v[l],v[i]);
    //         l++;
    //         i++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // for(int i=0;i<n;i++) {
    //     cout<<v[i]<<" ";
    // }

//     //DUTCH NATIONAL FLAG
//     vector<int>v={1,2,-3,4,-5,6};
//     int n=v.size();
//     int l=0,h=n-1;
//     while(l<h) {
//         if(v[l]<0) {
//             l++;
//         }
//         else if(v[h]>0) {
//             h--;
//         }
//         else {
//             swap(v[l],v[h]);
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }    
// }



//DUPLICATE NUMBER

//int main() {

    // //VISITED SOLUTION
    // int ans=0;
    //vector<int>nums={1,3,4,10,10};
    // for(int i=0;i<nums.size();i++) {
    //     int index=abs(nums[i]);

    //     if(nums[index]<0) {
    //         ans=index;
    //         break;
    //     }
    //     nums[index]*=-1;
    // }
    // cout<<ans<<endl;

    // //POSITIONING METHOD
    // vector<int>nums={1,3,4,10,10};
    // while(nums[0]!=nums[nums[0]]) {
    //     swap(nums[0],nums[nums[0]]);
    // }
    // cout<< nums[0];
//}


//MISSING NUMBER IN DUPLICATE NUMBER
// void findMissing(int a[],int n) {
//     for(int i=0;i<n;i++) {
//         int index=abs(a[i]);
//         if(a[index-1]>0) {
//             a[index-1]*=-1;
//         }
//     }
//     for(int i=0;i<n;i++) {
//         cout<<a[i]<<" ";
//     }
//     for(int i=0;i<n;i++) {
//         if(a[i]>0)
//             cout<<i+1<<" ";
//     }
// } 
// int main() {
//     int n;
//     int a[]={1,3,5,3,4};
//     n=sizeof(a)/sizeof(int);
//     findMissing(a,n);
// }


// //SORTING

// void findMissing(int a[],int n) {
//     for(int i=0;i<n;) {
//         int index=a[i]-1;
//         if(a[i]!=a[index]) {
//             swap(a[i],a[index]);
//         }
//         else{
//             i++;
//         }
//     }   
//     for(int i=0;i<n;i++) {
//         if(a[i]!=i+1) {
//             cout<<i+1<<" ";
//         }
//     }
// } 

// int main() {
//     int n;
//     int a[]={1,3,5,3,4};
//     n=sizeof(a)/sizeof(int);
//     findMissing(a,n);
// }


//FIRST REPEATING ELEMENT

// int main() {
//     int arr[]={1,5,3,4,3,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     unordered_map<int,int>hash {
//         hash[arr[i]]++;
//     }
// }


//WAVE PRINT A MATRIX
//COL WISE
// int main() {
//     vector<vector<int>>v {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//         {17,18,19,20}
//     };
//     int row=v.size();
//     int col = v[0].size();
//     for(int j=0;j<col;j++) {
//         if((j&1)==0) {
//             for(int i=0;i<row;i++) {
//                 cout<<v[i][j]<<" ";
//             }
//         }
//         else {
//             for(int i=row-1;i>=0;i--) {
//                 cout<<v[i][j]<<" ";
//             }
//         }
//     }
// }
//ROW WISE
// int main() {
//     vector<vector<int>>v {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16},
//         {17,18,19,20}
//     };
//     int row=v.size();
//     int col = v[0].size();
//     for(int i=0;i<row;i++) {
//         if((i&1)==0) {
//             for(int j=0;j<col;j++) {
//                 cout<<v[i][j]<<" ";
//             }
//         }
//         else {
//             for(int j=col-1;j>=0;j--) {
//                 cout<<v[i][j]<<" ";
//             }
//         }
//     }
// }

//SPIRAL PRINT OF A MATRIX

