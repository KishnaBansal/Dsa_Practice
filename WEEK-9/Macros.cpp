#include<iostream>
using namespace std;

#define PI 3.1459
#define MAXX(x,y) (x>y ? x : y)

float circleArea(float r) {
    return PI * r * r;
}

void fun() {
    int x = 6;
    int b = 17;
    int c = MAXX(x,b);
}

int main() {
    cout<<circleArea(2.14)<<endl;
    cout<<MAXX(1,2)<<endl;
}