#include <iostream>
#include<string>
#include<cmath>
using namespace std;

void subsq(string &str) {
    int num_subs = pow(2,str.size());  //No. of subseq
    for(int n = 0;n<num_subs;n++) {
        string op;
        int num = n;
        int i = 0;
        while(num) {
            int b = (num & 1);
            if(b) {
                op.push_back(str[i]);
                i++;
            }
            num >>= 1;
        }
        cout<<op<<" ";
        cout<<endl;
    }
}

int main() {
    string str = "abc";
    subsq(str);
}