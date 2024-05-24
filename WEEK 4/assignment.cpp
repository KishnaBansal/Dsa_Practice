#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
#include<set>
#include<numeric>


// int main() {
//     vector<int>v={1,1,3,4,5};
//     sort(v.begin(),v.end());
//     int n=v.size(),k=2;
//     int i=0,j=1;
//     set<pair<int,int>> ans;
//     while(j<v.size()) {
//         int diff = v[j]-v[i];
//         if(i==j) {
//             j++;
//         }
//         if(diff == k) {
//             ans.insert({v[i],v[j]});
//             i++;
//             j++;
//         }
//         else if(diff > k){
//             i++;
//         }
//         else {
//             j++;
//         }
//     }
//     cout<<ans.size()<<endl;
// }



//ExponentialSearch 
// int binarySearch(vector<int>&v,int s,int e,int x) {
//     while(s<=e) {
//         int m = s+(e-s)/2;
//         if(v[m] == x) {
//             return m;
//         }
//         else if (v[m]<x) {
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//     }
//     return -1;
// }
// int expSearch(vector<int>&v,int n,int x) {
//     if(v[0] == x) {
//         return 0;
//     }
//     int i=1;
//     while(i<n && v[i]<=x)  {
//         i=i<<1;
//     }
//     return binarySearch(v,i/2,min(i,n-1),x);
// }
// int main() {
//     vector<int>v={2,3,5,6,11,13,14,56,70};
//     int n=v.size();
//     int x = 13;
//     int ans = expSearch(v,n,x);
//     cout<<ans<<endl;
    
// }


//Unbounded Search

// int binarySearch(vector<int>&v,int s,int e,int x) {
//     while(s<=e) {
//         int m = s+(e-s)/2;
//         if(v[m] == x) {
//             return m;
//         }
//         else if (v[m]<x) {
//             s=m+1;
//         }
//         else {
//             e=m-1;
//         }
//     }
//     return -1;
// }

// int unboundedSearch(vector<int>&v,int n,int x) {
//     int i=0,j=1;
//     while(v[j] < x) {
//         i=j;
//         j=j<<1;
//     }
//     return binarySearch(v,i,j,x);
// }

// int main() {
//     vector<int>v={2,3,5,6,11,13,14,56,70};
//     int n=v.size();
//     int x = 13;
//     int ans = unboundedSearch(v,n,x);
//     cout<<ans<<endl;
    
// }



//Book Allocation

// bool isPossibleSolution(int a[],int n,int m,int sol) {
//     int pageSum=0,count=1;
//     for(int i=0;i<n;i++) {
//         if(a[i]>sol) {
//             return false;
//         }
//         if(pageSum + a[i] > sol) {
//             count++;
//             pageSum = a[i];
//             if(count>m) {
//                 return false;
//             }
//         }
//         else {
//             pageSum += a[i];
//         }
//     }
//     return true;
// }

// int main() {
//     int n,m,a[20];
//     int s=0,e=accumulate(a,a+n,0),ans=-1;
//     if(m>n) {
//         return -1;
//     }
//     while(s<=e) {
//         int mid=s+(e-s)/2;
//         if(isPossibleSolution(a,4,2,mid)) {
//             ans=mid;
//             e=mid-1;
//         } 
//         else {
//             s=mid+1;
//         }
//     }
//     cout<<ans<<endl;
// }

//Painters Partition 

//Agressive Cows 


// //EKO SPOJ 
// bool isPossibleSolution(vector<long long int>&trees,long long int m,long long int sol) {
//     long long int woodCollected=0;
//     for(int i=0;i<trees.size();i++) {
//         if(trees[i] > sol) {
//                 woodCollected += trees[i]-sol;
//         }
//     }
//     return woodCollected>=m;
// }
// long long int maxSawHeight(vector<long long int>&trees,long long int m) {
//     long long int s=0,e,ans=-1;
//     e = *max_element(trees.begin(),trees.end());
//     while(s<=e) {
//         long long int mid=s+(e-s)/2;
//         if(isPossibleSolution(trees,m,mid)) {
//             ans=mid;
//             s=mid+1;
//         }
//         else {
//             e=mid-1;
//         }
//     }
//     return ans;
// }

// int main() {
//     long long int n,m;
//     cin>>n>>m;
//     vector<long long int>trees;
//     while(n--) {
//         long long int height;
//         cin>>height;
//         trees.push_back(height);
//     }
//     cout<<maxSawHeight(trees,m);
// }


//PRATA SPOJ 
bool isPossibleSolution(vector<int>ranks,int nP,int sol) {
    int currP=0; //initial cooked prata count
    for(int i=0;i<ranks.size();i++) {
        int R=ranks[i],j=1;
        int timeTaken=0;
        while(true) {
            if(timeTaken + j*R <= sol) {
                currP++;
                timeTaken += j*R;
                j++;
            }
            else {
                break;
            }
        }
        if(currP >= nP) {
            return true;
        }
    }
    return false;
}
int minTimeOrder(vector<int>&ranks,int nP) {
    int s=0,ans=-1;
    int e=(*max_element(ranks.begin(),ranks.end())) * (nP*(nP+1)/2);
    while(s<=e) {
        int mid = s+(e-s)/2;
        if(isPossibleSolution(ranks,nP,mid)) {
            ans=mid;
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return ans;
}
int main() {
    int T;cin>>T;
    int nP,nC;
    cin>>nP>>nC;
    vector<int>ranks;
    while(nC--) {
        int R;cin>>R;
        ranks.push_back(R);
    }
    cout<<minTimeOrder(ranks,nP)<<endl;
}