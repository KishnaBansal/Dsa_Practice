#include<iostream>
using namespace std;

class abc {
    // mutable int x;         //Not a good practice to use mutable     
    int x;
    int *y;
    const int z;
    public:
        // abc() {
        //     x = 0;
        //     y = new int(0);   //Address of newly allocated pointer is stored in 'y' variable
        // }

        // // ctor : old style
        // abc(int _x,int _y,int _z = 0) {     //_z is a default argument
        //     x = _x;
        //     y = new int(_y);
        //     z = _z;
        // }

        // ctor : Initialization list
        abc(int _x,int _y,int _z) : x(_x),y(new int(_y)),z(_z){
            cout<<"init list"<<endl;
            *y = *y * 10;
        }

        int getX() const {
            // x = 10;
            return x;
        }
        void setX(int _val) {
            x = _val;
        }
        int getY() const {
            return *y;
        }
        void setY(int _val) {
            *y = _val;
        }
        int getZ() const {
            return z;
        }
};

void printABC(const abc&a) {
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}

int main() {
    abc a(1,2,3);
    printABC(a);
    // cout<<a.getX()<<endl;
    // cout<<a.getY()<<endl;
}

int main2() {
    // const int x = 5;
    // cout<<x<<endl;


    // //2. const with pointers
    // const int *a = new int(2);          //can be written as int const.... also //Const DATA but Non-Const Pointer
    // cout<<*a<<endl;
    // int b = 20;
    // a = &b;               //Pointers itself can be reassigned
    // cout<<*a<<endl;

    // //3. const pointer but non-const data
    // int *const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;
    // // int b = 56;            //It will not work
    // // a = &b;

    // 4. const pointer with const data
    const int *const a = new int(2);
    cout<<*a<<endl;
    // *a = 20;          //Will not work
    // int b = 45;
    // int a = &b;
}