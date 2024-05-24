#include<iostream>
#include<string>
#include <istream>
using namespace std;
// int main() {
//     // char ch[10];
//     // cin >> ch;
//     // cout<<ch<<endl;
//     // int n = sizeof(ch)/sizeof(char);

//     // for(int i=0;i<n;i++) {
//     //     cout<<ch[i]<<endl;
//     // }
//     // char temp = ch[5];
//     // int val = (int)temp;
//     // cout<<val<<endl;

//     char ch[100];
//     // cin>>ch;
//     // cout<<ch<<endl;
//     cin.getline(ch,100);
//     cout<<ch;

// }


//  //int findLength(char ch[],int n) {
    
    // //Using for loop
    // int length=0;
    // for(int i=0;i<n;i++) {
    //     if(ch[i] == '\0') {
    //         break;
    //     }
    //     else {
    //         length++;
    //     }
    // }

    
//     //using while loop                          //We can use only one variable also in while loop....
//     int index = 0,length=0;
//     while(ch[index] != '\0') {
//         index++;
//         length++;
//     }
//     return length;
// }
// int main() {
//     char ch[100];
//     //cin>>ch;
//     cin.getline(ch,100);
//     int n=sizeof(ch)/sizeof(char);
//     int len = findLength(ch,n);
//     cout<<len<<endl;
//     cout<<strlen(ch)<<endl;
// }


// void reverse(char ch[],int n) {
//     int l=0,r=n-1;
//     while (l<=r)
//     {
//         swap(ch[l],ch[r]);
//         l++;r--;
//     }
// }
// int main() {
//     char ch[100];
//     //int n = strlen(ch);
//     cin.getline(ch,100);
//     int n = strlen(ch);
//     cout<<"Before: "<<ch<<endl;
//     reverse(ch,n);
//     cout<<"After: "<<ch<<endl;
//     strrev(ch);
//     cout<<"After: "<<ch<<endl;
// }

// void lowerToUpper(char ch[],int n) {
//     int i=0;
//     while(ch[i] != '\0') {
//         char currChar = ch[i];
//         if(currChar>='a' && currChar<= 'z') {
//             ch[i] = currChar - 'a' + 'A';
//         }
//         i++;
//     }
// }
// int main() {
//     char ch[100];
//     int n = strlen(ch);
//     cin.getline(ch,100);
//     //int n = strlen(ch);
//     cout<<"Before: "<<ch<<endl;
//     lowerToUpper(ch,n);
//     cout<<"After: "<<ch<<endl;
// }

// void replace(char ch[],int n) {
//     int i=0;
//     while(ch[i] != '\0') {
//         if(ch[i]=='@') {
//             ch[i] = ' ';
//         }
//         i++;
//     }
// }
// int main() {
//     char ch[100];
//     int n = strlen(ch);
//     cin.getline(ch,100);
//     //int n = strlen(ch);
//     cout<<"Before: "<<ch<<endl;
//     replace(ch,n);
//     cout<<"After: "<<ch<<endl;
// }

// bool checkPalindrome(char ch[],int n) {
//     int l=0,r=n-1;
//     while(l<=r) {
//         if(ch[l]==ch[r]) {
//             l++;
//             r--;
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
//     cin.getline(ch,100);
//     int n = strlen(ch);
//     //cout<<"Before: "<<ch<<endl;
//     bool isPalindrome = checkPalindrome(ch,n);
//     if(isPalindrome) {
//         cout<<"It is a Palindrome"<<endl;
//     }
//     else {
//         cout<<"It is not a Palindrome"<<endl;
//     }
// }



// int main() {
//     string name;
//     //cin>>name;
//     getline(cin,name); 
//     cout<<name<<endl;
//     cout<<name[0]<<endl;
//     int i=0;
//     while(name[i] != '\0') {
//         cout<<"At index: "<<i<<" Character is: "<<name[i]<<endl;
//         i++;
//     }
//     int val = (int)name[5];
//     cout<<val<<endl;
// }


int main() {
    // string name;
    // getline(cin,name);
    // cout<<name;
    // // cin>>name;
    // // cout<<name;
    
    // string temp="";

    // cout<<"Length of string is: "<<name.length()<<endl;
    // cout<<"String is empty or not: "<<temp.empty()<<endl;
    // cout<<"Character at 0th pos is: "<<name.at(0)<<endl;
    // cout<<"Character at first pos is: "<<name.front()<<endl;
    // cout<<"Character at last pos is: "<<name.back()<<endl;

    // string str1="Peace";
    // string str2 = "Cool";
    // str1.append(str2);
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // string desc = "This is a car";
    // desc.erase(4,3);
    // cout<<desc<<endl;

    // string name = "Peace cool";
    // string middle ="Nothing";
    // name.insert(5,middle);
    // cout<<name<<endl; 

    // string name = "Peace";
    // cout<<name<<endl;
    // name.push_back('c');
    // cout<<name<<endl;
    // name.pop_back();
    // cout<<name<<endl;

    // string str1 = "paindi eh fer dhak champion";
    // string str2 = "champion";
    // if(str1.find(str2) == string::npos) {
    //     cout<<"Not Found"<<endl;
    // }
    // else {
    //     cout<<"Found"<<endl;
    // }

    // string str1 = "peace";
    // string str2 = "Peace";
    // if(str1.compare(str2) == 0) {
    //     cout<<"Matching"<<endl;
    // }
    // else {
    //     cout<<"Not Matching"<<endl;
    // }

    // string desc = "this is a car, big daddy of all suvs";
    // cout << desc.substr(19,5) << endl;
}