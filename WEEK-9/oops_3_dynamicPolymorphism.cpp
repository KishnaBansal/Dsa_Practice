#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
    public:
        virtual void sound() {
            cout<<"Animal making sound\n";
        }
        virtual ~Animal() {
            cout<<"Animal detor"<<endl;
        }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout<<"Dog is barking"<<endl;
        }
        ~Dog() {
            cout<<"Dog detor"<<endl;
        }
};

class Cat : public Animal {
    public:
        void sound() override {
            cout<<"Cat is meowing"<<endl;
        }
        ~Cat() {
            cout<<"Cat detor"<<endl;
        }
};

class Parrot : public Animal {
    public:
        void sound() override {
            cout<<"Parrot is speaking"<<endl;
        }
        ~Parrot() {
            cout<<"Parrot detor"<<endl;
        }
};

void sound(Animal *animal) {
    animal->sound();  //polymorphic
    //animal->sound  is behaving as per required object allocated at runtime
}

int main() {
    // Dog *dog = new Dog();
    // dog->sound();
    Animal *animal = new Dog();
    sound(animal);
    // animal = new Cat();
    // sound(animal);
    // animal = new Parrot();
    // sound(animal); 

    delete animal;


    return 0;
}