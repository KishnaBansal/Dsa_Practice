#include<iostream>
using namespace std;

// int main()
// {
//     int num;
//     cin>>num;
//     cout<<num<<endl;
//     if(num<0)
//     {
//         cout<<"-ve";
//     }
//     else if(num>0)
//     {
//         cout<<"+ve";
//     }
//     else
//     {
//         cout<<"0";
//     }
// }

// int main() {
//     int i=1;
//     for(;;) {
//         if(i<5) {
//             cout<<"ok"<<endl;
//             i=i+1;
//         }
//     }
//     cout<<"HI";
// }



// int main() {
//     for(int i=1;i<=11;i++) {
//         cout<<"KB "<<i<<endl;
//     }
//     for(int i=1;i<=10;i=i+1) {
//         cout<<i*19<<endl;
//     }
//     for(int i=1;i<=100;i++) {
//         if(i%2==0) {
//             cout<<i<<endl;
//         }
//     }
// }



// int main() {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<5;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main() 
// {
//     int n;
//     int m;
//     cin >> n;
//     cin>>m;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(i==0||i==n-1)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 if(j==0||j==m-1)
//                 {
//                     cout<<"* ";
//                 }
//                 else 
//                 {
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     for(int i=0;i<5;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n=10;
//     if(cout << n) {
//         cout<<"Bye";
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     while(n>0) {
//         int bit=n % 2;
//         cout<<bit<<endl;
//         n=n / 2;
//     }
// }

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             if(i==0 || i==n-1) {
//                 cout<<"* ";
//             }
//             else {
//                 if(j==0 || j==n-1) {
//                     cout<<"* ";
//                 }
//                 else {
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             if(i==0 || j==0 || j==n-i-1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         int k=0;
//         for(int j=0;j<2*n-1;j++) {
//             if(j<n-i-1) {
//                 cout<<"  ";
//             }
//             else if(k<(2*i)+1) {
//                 if(k==0 || k==2*i || i==n-1) {
//                     cout<<"* ";
//                 }
//                 else {
//                     cout<<"  ";
//                 }
//                 k++;
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }