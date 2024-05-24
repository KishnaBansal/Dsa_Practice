#include<iostream>
#include<string>
using namespace std;

// string removeAdjacentDuplicates(string s) {
//     string ans="";
//     int i=0;
//     while(i < s.length()){
//         if(ans.length() > 0 && (ans[ans.length()-1] == s[i])) {
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
//     string s = "abbaca";
//     string ans = removeAdjacentDuplicates(s);
//     cout<<ans<<endl;
// }

// string removeSubString(string s,string part) {
//     while(s.find(part) != string::npos) {
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main() {
//     string s = "abccbaddcbaaaee";
//     string part = "cba";
//     string ans = removeSubString(s,part);
//     cout<<ans<<endl;
// }


// bool checkPalindrome(string s,int i,int j) {
//     while(i <= j) {
//         if(s[i] != s[j]) {
//             return false;
//         }
//         else {
//             i++;j--;
//         }
//     }
//     return true;
// }
// bool validPalindrome(string s) {
//     int i=0,j=s.length()-1;
//     while(i < j) {
//         if(s[i] == s[j]) {
//             i++;j--;
//         }
//         else {
//             bool ans1 = checkPalindrome(s,i+1,j);
//             bool ans2 = checkPalindrome(s,i,j-1);
//             return ans1 || ans2; 
//         }
//     }
//     return true;
// }
// int main() {
//     string s = "abcdsscba";
//     bool ans = validPalindrome(s);
//     cout<<ans<<endl;
// }