#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Bird {
    public:
        int age,weight;
        int nol;
        string color;

        void eat() {
            cout<<"eating"<<endl;
        }
        void fly() {
            cout<<"Flying"<<endl;
        }
};

class Sparrow : public Bird {
    public:
        Sparrow(int age,int weight,string color,int nol) {
            this -> age = age;
            this -> weight = weight;
            this -> color = color;
            this -> nol = nol;
        } 
        void grassing() {
            cout<<"Sparrow is grassing"<<endl;
        }
};

class Peigon : public Bird {
    public: 
        void guttering() {
            cout<<"Peigon is guttering"<<endl;
        }
};

class Parrot : public Bird {
    public: 
        void speaking() {
            cout<<"Parrot is speaking"<<endl;
        }
};

int main() {
    Sparrow s(1,1,"Colorful",2);
    cout<<s.color<<endl;
    // Peigon p;
    
}