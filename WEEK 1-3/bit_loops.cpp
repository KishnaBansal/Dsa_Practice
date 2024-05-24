#include<iostream>
using namespace std;

int main() {
    // int a=5;
    // int b=10;
    // cout<< (a&b)<<endl;
    // cout<< (a|b)<<endl;
    // cout<<(a^b)<<endl;
    // bool n=1;
    // cout<<~n<<endl;
    // cout<<(~n)<<endl;
    // cout<<~(n)<<endl;

    // int a=7;
    // cout<<(a<<1)<<endl;

    // int a=5;
    // cout<<(a>>1)<<endl;
    // cout<<(a<<-4)<<endl;
    // unsigned b=-5;
    // cout<<(b>>1)<<endl;

    
    
    //INCREMENT AND DECREMENT
    
    // int a=21;
    // cout<<++a<<endl;
    // cout<<a++<<endl;
    // cout<<a<<endl;

    // int a=10;
    // cout<<(++a)*10<<endl;
    // cout<<(a++)*10<<endl;
    // cout<<a<<endl;

    //int a=10;
    //cout<< (++a) * (a++) <<endl;   //ANS is coming 121 in different compiler
    //cout<< (a++) * (++a) <<endl;

    
    //BREAK KEYWORD

    // for(int i=0;i<4;i++) {
    //     cout<<i;
    //     break;
    // }


    // CONTINUE KEYWORD

    // for(int i=0;i<=5;i++) {
    //     cout<<"Hello"<<endl;
    //     continue;
    //     cout<<"World"<<endl;
    // }


    int n;
    cin>>n;
    if((n&1)==0) {
        cout<<"Even"<<endl;
    }
    else {
        cout<<"Odd"<<endl;
    }

    }