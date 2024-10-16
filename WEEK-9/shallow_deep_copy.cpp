#include<iostream>
using namespace std;

class abc {
    public:
        int x;
        int *y;

        abc(int _x,int _y) : x(_x),y(new int(_y)) {}

        // //default dumb copy ctor : it does SHALLOW COPY
        // abc(const abc&obj) {
        //     x = obj.x;
        //     y = obj.y;
        // }

        //Our Smart copy ctor : it does deep copy
        abc(const abc&obj) {
            x = obj.x;
            y = new int(*obj.y);  // 'a' ke 'y' ki value uthai aur use nai location pe daal diya and uska address 'b' ke 'y' ko de diya
        }

        void print() const {
            printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n",x,y,*y);
        }

        ~abc() {
            delete y;
        }
};

int main() {
    // abc a(1,2);
    // a.print();
    // // abc b(a);
    // abc b = a;     //Copy ctor is called
    // b.print();
    // *b.y = 20;
    // b.print();
    // a.print();

    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();
    return 0;
}