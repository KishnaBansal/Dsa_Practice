#include<iostream>
using namespace std;


//factorial of a number

int fact(int n) {
    
    //Base Case
    if(n==0 || n==1) {
        return 1;
    }
    //Recursive Call
    int recAns = fact(n-1);
    //Processing
    int finalAns = n * recAns;
    return finalAns;
}
void printRevCount(int n) {
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printRevCount(n-1);
}
int powerOfTwo(int n) {
    if(n==0) return 1;
    return 2 * powerOfTwo(n-1);
}
int fibo(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}
int sum(int n) {
    if(n==1) return 1;
    return n + sum(n-1);
}
int main() {
    cout<<fact(5)<<endl;
    printRevCount(5);
    cout<<powerOfTwo(5)<<endl;
    cout<<fibo(7)<<endl;
    cout<<sum(5)<<endl;
}