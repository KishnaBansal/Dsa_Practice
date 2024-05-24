#include<iostream>
#include<string>
//#include<istream>
using namespace std;

// string deCode(string key,string msg) {
//     //creating mapping
//     char start = 'a';
//     char mapping[500] = {0};
//     for(auto ch : key) {
//         if(ch != ' ' && mapping[ch] == 0) {
//             mapping[ch] = start;
//             start++;
//         }
//     }
//     string ans="";
//     //using mapping
//     for(auto ch : msg) {
//         char ch = msg[ch];
//         if(ch == ' ') {
//             ans.push_back = ' ';
//         }
//         else {
//             char deCode = mapping[ch];
//             ans.push_back(deCode);
//         }
//     }
//     return ans;
// }

// int main() {
//     string key = "the quick brown fox jumps over the lazy dog",message = "vkbs bs t suepuv";
//     string finalAns = deCode(key,message);
//     cout<<finalAns;
// }


