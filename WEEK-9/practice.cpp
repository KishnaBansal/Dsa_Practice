#include<iostream>

using namespace std;

class Car {
    private:
        int ps;
    public:
        void pickUp() {
            cout<<"My car has a great pickup"<<endl;
        }
        Car() {
            cout<<"Default ctor called"<<endl;
        }
        Car(int ps) {
            this->ps = ps;
            cout<<"Parametrized ctor called"<<endl;
        }
        void setPs(int ps) {
            this->ps = ps;
        }
        void getPs() {
            cout<<ps<<endl;
        }
};

class D {
    // int a;
    public:
        float a;
    int a;};

int main() {
    Car c1;
    c1.pickUp();
    Car *c2 = new Car();
    // (*c2).pickUp();
    c2->pickUp();
    c2->setPs(786);
    c2->getPs();
    delete c2;
    c2 = nullptr;
    Car c3;
    Car c4(500);
    D d1;
    d1.a = 2.0;

}