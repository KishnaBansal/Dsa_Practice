#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>

class MyString {
    private:
        char *data;  //Pointer to char array data
        int length;  //size of an array
    public:
        //default ctor
        MyString();

        //param. ctor
        MyString(const char *str);

        //copy ctor
        MyString(const MyString &other);

        ~MyString();

        int size() const;

        bool empty() const;

        const char* c_str() const;

        char operator[](int index);

        //overload insertion operator << for easy output
        friend std::ostream &operator<<(std::ostream &os,const MyString &str);

};
#endif //MYSTRING_H