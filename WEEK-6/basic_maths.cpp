#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
// bool isPrime(int n) {
//     if(n<=1) return false;
//     //int sqrtN = sqrt(n);
//     for(int i=2;i*i<=n;i++) {
//         if(n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int count=0;
//     int n;cin>>n;
//     for(int i=0;i<n;i++) {
//         if(isPrime(i)) {
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }

// int main() {
//     int n,ans=0;cin>>n;
//     vector<bool>prime(n,true);
//     if(n==0) return false;
//     prime[0] = prime[1] = false;
//     for(int i=2;i<n;i++) {
//         if(prime[i]) {
//             ans++;
//         }
//         int j=2*i;
//         while(j<n) {
//             prime[j] = false;
//             j+=i;
//         }
//     }
//     cout<<ans<<endl;
// }

int main() {
    int a,b;cin>>a>>b;
    if(a==0) return b;
    if(b==0) return a;
    while(a>0 && b>0) {
        if(a>b) {
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    int ans = a==0?b:a;
    cout<<ans<<endl;
    int lcm = (a*b)/ans;
    cout<<"Their lcm is "<<lcm<<endl;
}