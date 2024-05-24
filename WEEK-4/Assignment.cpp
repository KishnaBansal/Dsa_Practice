#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

// int main() {
//     vector<int>v={1,1,1,1,1};
//     int n=v.size();
//     sort(v.begin(),v.end());
//     int i=0,j=1;
//     int k=0;
//     set<pair<int,int>> ans;
//     while(j<n) {
//         int diff = v[j]-v[i];
//         if(diff==k) {
//             ans.insert({v[i],v[j]});
//             i++,j++;
//         }
//         else if(diff<k) {
//             j++;
//         }
//         else {
//             i++;
//         }
//         if(i==j) {
//             j++;
//         }
//     }
//     cout<<ans.size()<<endl;
// }


// int binarySearch(vector<int>v,int s,int e,int k) {
//     while (s<=e) {
//         int m=s+(e-s)/2;
//         if(v[m] == k) {
//             return m;
//         }
//         else if(k>v[m]) {
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int>v={1,1,3,4,5};
//     int n=v.size();
//     int k=2;
//     sort(v.begin(),v.end());
//     set<pair<int,int>> ans;
//     for(int i=0;i<n;i++) {
//         if(binarySearch(v,i+1,n-1,k+v[i]) != -1) {
//             ans.insert({v[i],v[i]+k});
//         } 
//     }
//     cout<<ans.size()<<endl;
// }



// int main() {
//     vector<int>v = {1,2,3,4,5};
//     int l=0,h=v.size()-1;
//     int k=4,x=3;
//     while((h-l)>=k) {
//         if(x-v[l]>v[h]-x) {
//             l++;
//         }
//         else {
//             h--;
//         }
//     }
//     for(int i=l;i<=h;i++) {
//         cout<<v[i]<<" ";
//     }
// }



int binarySearch(int v[],int s,int e,int k) {
    while (s<=e) {
        int m=s+(e-s)/2;
        if(v[m] == k) {
            return m;
        }
        else if(k>v[m]) {
            s=m+1;
        }
        else {
            e=m-1;
        }
    }
    return -1;
}
int main() {
    int a[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(a)/sizeof(int);
    int x=13;
    if(a[0] == x) {
        cout<<0<<endl;
    }
    int i=1;
    while(i<n && a[i]<=x) {
        i *= 2;                   //or i=i<<1
    }
    cout<<binarySearch(a,i/2,min(i,n-1),x)<<endl;
}