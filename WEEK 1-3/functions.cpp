#include<iostream>
using namespace std;

//-------------------------------------------------
// void printLine() {
//     for(int i=0;i<10;i++) {
//         cout<<"Hello Peace !"<<endl;
//     }
// }

// int main() {
//     printLine();
// }

//-------------------------------------------------

// void printLine();

// int main() {
//     printLine();
// }
// void printLine() {
//     for(int i=0;i<10;i++) {
//         cout<<"Hello Peace !"<<endl;
//     }
// }

//------------------------------------------------

// void printSum(int a,int b,int c) {
//     int sum=a+b+c;
//     cout<<sum<<endl;
// }
// int main() {
//     printSum(1,2,7);
// }

//-----------------------------------------------

// int printSum(int a,int b,int c) {
//     int sum=a+b+c;
//     return sum;
// }
// int main() {
//     int ans = printSum(1,2,7);
//     cout<<ans<<endl;

//     return 0;
// }

//-----------------------------------------------

// void msgPrint() {
//     cout<<"Msg 1"<<endl;
//     return;
//     cout<<"Msg 2"<<endl;
// }
// int main() {
//     msgPrint();
// }

//------------------------------------------------

// void max(int a,int b,int c) {
//     if(a>b && a>c) {
//         cout<<a;
//     }
//     else if(b>a && b>c) {
//         cout<<b;
//     }
//     else {
//         cout<<c;
//     }
// }
// int main() {
//     max(2,3,4);
// }

//-----------------------------------------------

// void printMax(int n1,int n2,int n3) {
//     int ans1=max(n1,n2);
//     int finalAns=max(ans1,n3);
//     cout<<"final ans is: " << finalAns << endl;
// }

// int main() {
//     printMax(3,3,1);
// }

//------------------------------------------------

// void printCount(int n) {
//     for(int i=0;i<=n;i++) {
//         cout<<i<<endl;
//     }
// }
// int main() {
//     printCount(10);
// }

//-----------------------------------------------

// void checkEvenOdd(int n) {
//     if(n%2==0) {
//         cout<<"Even"<<endl;
//     }
//     else {
//         cout<<"Odd"<<endl;
//     }
// }
// int main() {
//     checkEvenOdd(10);
// }

//-----------------------------------------------

// void sumOfN(int n) {
//     int sum=0;
//     for(int i=0;i<=n;i++) {
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }
// int main() {
//     sumOfN(10);
// }

//-----------------------------------------------

// void sumEven(int n) {
//     int sum=0;
//     for(int i=0;i<=n;i=i+2) {
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }
// int main() {
//     sumEven(10);
// }

//-------------------------------------------------

// bool prime(int n) {
//     for(int i=2;i<n;i++) {
//         if(n%i==0) {
//             return false;
//         }
//         else {
//             return true;
//         }
//     }
// }
// int main() {
//     bool a = prime(2);
//     if(a) {
//         cout<<"Prime";
//     }
//     else {
//         cout<<"Not Prime";
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
//         bool isPrime=checkPrime(i);
//         if(isPrime) {
//             cout<<i<<endl;
//         }
//     }
// }