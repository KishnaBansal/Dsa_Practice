#include<iostream>
//#include<string.h>
#include<cstring>
using namespace std;
// int main() {
//     // char ch[20];
//     // cin>>ch;
//     // cout<<ch<<endl;
//     // int n = sizeof(ch)/sizeof(char);
//     // for(int i=0;i<n;i++) {
//     //     cout<<ch[i]<<" ";
//     // }
//     // cout<<endl;
//     // char null = ch[9];
//     // int temp = (int)null;
//     // cout<<temp<<endl;

//     char ch[100];
//     cin.getline(ch,100);
//     cout<<ch<<" ";
// }

// int main() {
//     char ch[25];
//     // cin>>ch;
//     // //cout<<ch;
//     // for(int i=0;i<5;i++) {
//     //     cout<<ch[i]<<" ";
//     // }
//     // cout<<endl;
//     // int val = ch[4];
//     // cout<<val;
//     cin.getline(ch,25);
//     cout<<ch;
// }

// int len(char ch[],int n) {
//     int len=0,index=0;
//     // for(int i=0;i<n;i++) {
//     //     if(ch[i] == '\0') {
//     //         break;
//     //     }
//     //     else {
//     //         len++;
//     //     }
//     // }
//     while(ch[index] != '\0') {
//         index++;
//         len++;
//     }
//     return len;
// }

// int main() {
//     char ch[100];
//     int n = sizeof(ch)/sizeof(char);
//     cin>>ch;
//     cout<<ch<<" ";
//     cout<<endl;
//     int ans = len(ch,n);
//     cout<<ans<<endl;
//     cout<<strlen(ch)<<endl;
// }


// void rev(char ch[],int n) {
//     int r=n-1,l=0;
//     while(l<=r) {
//         swap(ch[l],ch[r]);
//         l++;r--;
//     }
// }

// int main() {
//     char ch[100];
//     //int n = sizeof(ch)/sizeof(char);
//     cin.getline(ch,100);
//     int n = strlen(ch);
//     cout<<ch;
//     cout<<endl;
//     rev(ch,n);
//     cout<<ch;
// }


// void upperToLower(char ch[],int n) {
//     int i=0;
//     while(ch[i] != '\0') {
//         if(ch[i] >= 'A' && ch[i] <= 'Z') {
//             ch[i] = ch[i] - 'A' + 'a';
//         }
//         i++;
//     }
// }

// int main() {
//     char ch[100];
//     int n = strlen(ch);
//     cin.getline(ch,n);
//     cout<<ch;
//     upperToLower(ch,n);
//     cout<<'\n'<<ch;
// }

// bool palindrome(char ch[],int n) {
//     int l = 0,r = n-1;
//     while(l <= r) {
//         if(ch[l] == ch[r]) {
//             l++;r--;
//         }
//         else {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     char ch[100];
//     //int n = strlen(ch);
//     //int n = sizeof(ch)/sizeof(char);
//     cin.getline(ch,100);
//     int n = strlen(ch);
//     bool isPalindrome = palindrome(ch,n);
//     if(isPalindrome) {
//         cout<<"It is a palindrome"<<endl;
//     }
//     else {
//         cout<<"It is not a palindrome"<<endl;
//     }
// }


// int sqrt(int n) {
//     int s=0,e=n,ans=-1;
//     while(s<=e) {
//         long long int m = s+(e-s)/2;
//         if(m*m <= n) {
//             ans=m;
//             s=m+1;
//         } 
//         else {
//             e=m-1;
//         }
//     }
//     return ans;
// }

// double precisionSqrt(int n) {
//     double mysqrt = sqrt(n);
//     double step = 0.1;
//     int precision = 10;
//     for(int i=0;i<precision;i++) {
//         double j = mysqrt;
//         while(j*j <= n) {
//             mysqrt = j;
//             j += step;
//         }
//         step /= 10;
//     }
//     return mysqrt;
// }

// int main() {
//     int n;cin>>n;
//     cout<<"Less precised"<<endl;
//     cout<<sqrt(n);
//     cout<<"\nMore precised"<<endl;
//     cout<<precisionSqrt(n);
// }

// string removeAdjacentDuplicate(string s) {
//     string ans="";
//     int i=0;
//     while(i < s.length()) {
//         if(ans[ans.length()-1] == s[i]) {
//             ans.pop_back();
//         }
//         else {
//             ans.push_back(s[i]);
//         }
//         i++;
//     }
//     return ans;
// }

// int main() {
//     string s = "aa";
//     string finalAns = removeAdjacentDuplicate(s);
//     cout<<finalAns;   
// }


// string removeSubstr(string s,string part) {
//     while(s.find(part) != string :: npos) {
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main() {
//     string s = "abccbaddcbaaaee";
//     string part = "a";
//     string ans = removeSubstr(s,part);
//     cout<<ans;
// }

bool checkPalindrome(string s,int i,int j) {
    while(i < j) {
        if(s[i] == s[j]) {
            i++;j--;
        }
        else {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s) {
    int i=0,j=s.length()-1;
    while(i < j) {
        if(s[i] == s[j]) {
            i++;j--;
        }
        else {
            bool s1 = checkPalindrome(s,i+1,j);
            bool s2 = checkPalindrome(s,i,j-1);
            return s1 || s2;
        }
    }
    return true;
}

int main() {
    string s = "abcd";
    bool ans = validPalindrome(s);
    cout<<ans<<endl;
}