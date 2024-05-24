#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool myComp(int a,int b) {
//     return a<b;  //increasing order
//     return a>b;  //decreasing order
// }

// int main() {
//     int arr[]={1,4,5,3,2};
//     int n=5;
//     sort(arr,arr+n,myComp);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


bool myComp(vector<int>&a,vector<int>&b) {
    return a[1]<b[1];
}

void print(vector<vector<int>>v) {
    for(int i=0;i<v.size();i++) {
        vector<int>temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    }
}

int main() {
    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int a,b;
        cout<<"Enter a and b"<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<"Elements are: "<<endl;
    print(v);
    cout<<"Elements after sorting are: "<<endl;
    sort(v.begin(),v.end(),myComp);
    print(v);
}