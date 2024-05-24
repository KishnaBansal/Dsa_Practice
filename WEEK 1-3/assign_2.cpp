#include<iostream>
using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<=i;j++) {
//             if(i==j || i==n-1 || j==0) {
//                 cout<<j+1;
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=i+1;j<=n;j++) {
//             if(i==0 || j==i+1 || j==n) {
//                 cout<<j;
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//  int n;
//     cin>>n;
//     if((n&1)==0) {
//         cout<<"Even"<<endl;
//     }
//     else {
//         cout<<"Odd"<<endl;
//     }
// }


// bool checkPrime(int n) {
//     for(int i=2;i<n;i++) {
//         if(n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++) {
//         bool isPrime = checkPrime(i);
//         if(isPrime) {
//             cout<<i<<endl;
//         }
//     }
// }


// int reverse(int n) {
//     int rev=0;
//     int dig=0;
//     while(n!=0) {
//         dig=n%10;
//         rev=rev*10+dig;
//         n=n/10;
//     }
//     return rev;
// }
// int main() {
//     int n;
//     int r;
//     cin>>n;
//     r=reverse(n);
//     cout<<r<<endl;
// }


// int setkthbit(int n,int k) {
//     int mask=1<<k;
//     int ans = n | mask;
//     return ans;
// }
// int main() {
//     int n;
//     int k;
//     cin>>n;
//     cin>>k;
//     int s=setkthbit(n,k);
//     cout<<s<<endl;
// }



// int setbit(int n) {
//     int bit;
//     int count=0;
//     while(n>0) {
//         bit=n%2;
//         if(bit==1) {
//             count++;
//         }
//         n=n/2;
//     }
//     return count;
// }
// int main() {
//     int n;
//     cin>>n;
//     int s=setbit(n);
//     cout<<s<<endl;
// }


// int setbit(int n) {
//     int bit;
//     int count=0;
//     while(n>0) {
//         bit=n&1;
//         if(bit==1) {
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }
// int main() {
//     int n;
//     cin>>n;
//     int s=setbit(n);
//     cout<<s<<endl;
// }



// int main() {
//     int n;
//     cin>>n;
//     while(n) {
//         int dig=n%10;
//         cout<<dig<<endl;
//         n/=10;
//     }
// }


// int main() {
//     int n;
//     int n2;
//     int rev=0;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         cin>>n2;
//         rev=rev*10+n2;
//         cout<<"Number formed so far is: "<<rev<<endl;
//     }
// }