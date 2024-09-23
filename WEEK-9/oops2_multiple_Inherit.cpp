#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
    public: 
        void walk() {
            cout<<"Person is walking"<<endl;
        }
};

class Teacher : virtual public Person {
    public:
        void teach() {
            cout<<"Teaching"<<endl;
        }
};

class Researcher : virtual public Person {
    public:
        void researching() {
            cout<<"Researching"<<endl;
        }
};

//multiple inheritence
class Professor : public Teacher,public Researcher,virtual public Person {
    public :
        void bore() {
            cout<<"Boring"<<endl;
        }
};

int main() {
    Professor p;

    //Diamond Problem

    // //Solution 1 : Scope Resolution
    // Professor p;
    // p.Teacher::walk();
    // p.Researcher::walk(); 

    //Solution 2 : Virtual
    p.walk();
}