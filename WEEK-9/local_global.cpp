#include<iostream>
using namespace std;

int x = 2;  //Global

void fun() {
    int x = 60;
    cout<<x<<endl;
    ::x = 40;
    cout<<::x<<endl;
}

int main() {
    cout<<x<<endl;
    x=4;         //Global
    cout<<x<<endl;
    int x = 20;
    cout<<x<<endl;
    cout<<::x<<endl;   //Accessing global variable

    {
        int x = 50;
        {
            int x = 44;
            cout<<x<<endl;
        }
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    fun();
    // cout<<x<<endl;
}