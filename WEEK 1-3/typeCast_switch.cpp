#include<iostream>
using namespace std;



// int main() {

//     //IMPLICIT

//     // int a=10;
//     // float b=5.5;
//     // int result1=a+b;
//     // float result2=a+b;
//     // cout<<result1<<endl<<result2<<endl;

//     // char ch='A';
//     // char a = ch+1;
//     // cout<<a<<endl;

//     // int a=97;
//     // char ch='a';
//     // cout<<a<<endl;



//     //EXPLICIT

//     // int a=10;
//     // float b=5.5;
//     // float result=a+(int)b;
//     // cout<<result<<endl;

    
//     // double pi=3.14159;
//     // int int_pi=(int)pi;
//     // cout<<int_pi<<endl;


//     // float f=65.35;
//     // char ch=(char)f;
//     // cout<<ch<<endl;


//     // int a=10;
//     // int b=3.0;
//     // float c=a/b;
//     // cout<<c<<endl;

//     // int a=10;
//     // int b=3.0;
//     // float c=a/((float)b);
//     // cout<<c<<endl;
// }





//SWITCH CASE


// int main() {
//     float a,b;
//     cout<<"Enter Two Numbers"<<endl;
//     cin>>a>>b;
//     int op;
//     cout<<"What operation you want to do?"<<endl;
//     cin>>op;
//     float ans=0;

//     switch(op) {
//         case 0:
//             ans=a+b;
//             break;
//         case 1:
//             ans=a-b;
//             break;
//         case 2:
//             ans=a*b;
//             break;
//         case 3:
//             ans=a/b;
//             break;
//         default:
//             cout<<"Invalid Operation"<<endl;
//             return 0;
//     }
//     cout<<"Your answer is: "<<ans<<endl;
// }


// int main() {
//     int n;
//     int k=0;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n-i-1;j++) {
//             cout<<"  ";
//         }
//         if(i==n-1) {
//             k=2*i+1;
//         }
//         for(int j=0;j<2*i+1;j++) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<k;i++) {
//         cout<<"* ";
//     }
// }

// int main() {
//     int a=10;
//     int c=10;
//     int b= ++c * a++;
//     cout<<b<<endl;
// }