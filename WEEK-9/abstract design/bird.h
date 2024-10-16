#if !defined(BIRD_H)
#include<iostream>
using namespace std;
#define BIRD_H

class Bird {
    public:
        virtual void eat() = 0;
        virtual void fly() = 0;
        //classes that inherits this class has to implement pure virtual functions 
};

class sparrow : public Bird {
    public:
        void eat() {
            cout<<"Sparrow is eating\n";
        }
        void fly() {
            cout<<"Sparrow is flying\n";
        }
};

class eagle : public Bird {
    public:
        void eat() {
            cout<<"Eagle is eating\n";
        }
        void fly() {
            cout<<"Eagle is flying\n";
        }
};

#endif   //BIRD_H