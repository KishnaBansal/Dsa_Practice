#include<iostream>
using namespace std;
// void solve(int arr[],int size) {
//     cout<<"Inside solve: -> arr: "<< arr<<endl;
//     cout<<"Inside solve: -> &arr: "<<&arr<<endl;
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     solve(arr,5);

//     cout<<"Inside main: -> arr: "<< arr<<endl;
//     cout<<"Inside main: -> &arr: "<<&arr<<endl;
// }

// void solve(int arr[],int size) {
//     *arr=*arr+1;
// }
// int main() {
//     int arr[] = {10,20,30};
//     solve(arr,3);

//     for(int i=0;i<3;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

int solve1(int *p) {
    p = p+1;
}
int solve2(int* &p) {
    p = p+1;
}

int main() {
    int a = 5;
    int * p = &a;

    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;

    solve1(p);

    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;

    solve2(p);

    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;
}