#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void print(vector<int>&v) {
//     for(int i=0;i<v.size();i++) {
//         cout<<v[i]<<" "; 
//     }
// }

// bool mycomp(int &a,int &b) {
//     //return a<b;   //Increasing order
//     return a>b;     //Decreasing order
// }

// int main() {
//     vector<int>v = {22,33,55,11,44};

//     //In increasing order
//     //sort(v.begin(),v.end());

//     //In decreasing order
//     sort(v.begin(),v.end(),mycomp);
//     print(v);
// }


void printvv(vector<vector<int>>&v) {
    for(int i=0;i<v.size();i++) {
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}

bool mycomp(vector<int>&a, vector<int>&b) {
    return a[1]<b[1];
}

int main() {
    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int a,b;
        cout<<"Enter a and b\n";
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    printvv(v);
    //sort(v.begin(),v.end());   //Sort acc. to the Zeroe'th index

    sort(v.begin(), v.end(), mycomp);
}