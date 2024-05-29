#include<iostream>
#include "MyString.h"
#include<cstring>


//definitions of all functions declared in MyString.h

MyString::MyString() {  //MyString class ke iss vale function ko define kar rahe hai
    data = new char[1];
    length=0;
    data[0] = '\0';
}

MyString::MyString(const char *str) {  //MyString class ke iss vale function ko define kar rahe hai
    data = new char[strlen(str) + 1];
    length=strlen(str);
    strcpy(data,str);
}
MyString::MyString(const MyString &other) {  //MyString class ke iss vale function ko define kar rahe hai
    data = new char[other.size() + 1];
    length = other.length;
    strcpy(data,other.data);
}
MyString::~MyString() {
    delete[] data;
}
int MyString::size() const {
    return length;
}
bool MyString::empty() const {
    return length == 0;
}
const char*MyString::c_str() const {
    return data;
}
std::ostream &operator<<(std::ostream &os,const MyString &str) {
    os << str.c_str();
    return os;
}
char MyString::operator[](int index) {
    if(index>=length) {
        return '\0';
    }
}
