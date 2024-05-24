#include<iostream>
#include<limits.h>
#include<vector>
#include<string>
using namespace std;

// string revStrRec(string str,string &revstr,int n,int i,int j) {
//     if(i>=j) {return revstr;}
//     swap(str[i],str[j]);
//     cout<<str<<endl;
//     revstr = revStrRec(str,revstr,n,i+1,j-1);
// } 

// int main() {
//     string str = "abba";
//     string revstr = "";
//     int n = str.length();
//     int i = 0;
//     int j = n-1;
//     string ans = revStrRec(str,revstr,n,i,j);
//     if(strcmp(str,revstr) == 0) {
//         cout<<"Palindrome"<<endl;
//     }
//     else {
//         cout<<"Not Palindrome"<<endl;
//     }
//     // for(int i=0;i<n;i++) {
//     //     if(str[i] != revstr[i]) {
//     //         cout<<"Not Palindrome"<<endl;
//     //         return 0;
//     //     }
//     // }
//     // cout<<"Palindrome"<<endl;
// }


// void addStrRec(string str1,string str2) {
//     for(int i = 0;i<n;i++)
// }
// int main() {
//     string str1 = "12";
//     string str2 = "12";

// }


// int maxProfitRec(vector<int>&v,int n,int buy,int sell) {
//     if(buy<=sell) {return 0;}
//     if(v[buy] < v[buy+1]) {
//         maxProfitRec(v,n,buy+1,sell);
//     }

// }

// int main() {
//     vector<int>v = {};
//     int n = v.size();

// }

// void lastOccRec(string &str,int i,char key,int &ans) {
//     if(i>=str.size()) {return;}
//     if(str[i] == key) {
//         ans = i;
//     }
//     lastOccRec(str,i+1,key,ans);
// }

// int main() {
//     string str;
//     cin>>str;
//     int ans=-1;
//     char key;
//     cin>>key;
//     lastOccRec(str,0,key,ans);
//     cout<<ans<<endl;
// }


// void lastOccRecRToL(string &str,int i,char key,int &ans) {
//     if(i<0) {return;}
//     //if(i==0) {ans=0;}
//     if(str[i] == key) {
//         ans = i;
//         return;
//     }
//     lastOccRecRToL(str,i-1,key,ans);
// }

// int main() {
//     string str;
//     cin>>str;
//     int ans=-1;
//     char key;
//     cin>>key;
//     lastOccRecRToL(str,(str.size() - 1),key,ans);
//     cout<<ans<<endl;
// }


// int palRec(string str,int i,int j) {
//     if(i>=j) {
//         return 1;
//     }
//     if(str[i] != str[j]) {
//         return 0;
//     }
//     return palRec(str,i+1,j-1);
// }
// int main() {
//     string str = "ar";
//     int ans = palRec(str,0,str.size()-1);
//     if(ans) {
//         cout<<"Palindrome"<<endl;
//     } 
//     else {
//         cout<<"Not Palindrome"<<endl;
//     }
// }


void printSubArrRec_util(vector<int>v,int s,int e) {
    //Base Case
    if(e==v.size()) {
        return;
    }
    
    //Processing
    for(int i=s;i<=e;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Recursion
    printSubArrRec_util(v,s,e+1);
}
void printSubArrRec(vector<int>v,int s,int e) {
    for(int s=0;s<v.size();s++) {
        e=s;
        printSubArrRec_util(v,s,e);
    }
}
int main() {
    vector<int>v = {1,2,3,4,5};
    printSubArrRec(v,0,0);
}