// FIRST QUESTION

// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if(c>='a' && c<= 'z'){
//         cout<<0;
//     }
// 	else if(c>='A' && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }



// SECOND QUESTION

// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


#include<iostream>
using namespace std;


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int num,n;
//     cin >> num;
//     n=num/2;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//         for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             if(j==0 || j==i+1-1) {
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
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             if(j==0 || j==n-i-1) {
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
//     int num,n;
//     cin >> num;
//     n=num/2;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             if(j==0 || j==i+1-1) {
//                 cout<<"* ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//         for(int i=0;i<n;i++) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             if(j==0 || j==n-i-1) {
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
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*n-2*i-1;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             if(i==0 || j==0 || j==n-i-1) {
//                 cout<<"*";
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
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<2*i+1;j++) {
//             if(j%2==0) {
//                 cout<<i+1;
//             }
//             else {
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<j+1;
//         }
//         for(int j=i;j>0;j--) {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<2*n-i-2;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++) {
//             if(j%2==0) {
//                 cout<<i+1;
//             }
//             else {
//                 cout<<"*";
//             }
//         }
//         for(int j=0;j<2*n-i-2;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int n,k=1;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
// }



// int main() {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*n-2*i-2;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         for(int j=0;j<2*i;j++) {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }