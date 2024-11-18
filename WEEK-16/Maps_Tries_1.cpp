#include<iostream>
#include<unordered_map>
using namespace std;

// int main() {
//     //Creation
//     unordered_map<string,int>mapping;

//     //insertion
//     //different ways to make pair
//     pair<string,int>p = make_pair("peace",19);
//     pair<string,int>q("serene",19);
//     pair<string,int>r;
//     r.first = "KB";
//     r.second = 21;
//     //insert
//     mapping.insert(p);
//     mapping.insert(q);
//     mapping.insert(r);
//     mapping["cool"] = 22;

//     cout <<"Size of map: " << mapping.size() <<endl;

//     //Access
//     cout << mapping.at("peace") << endl;
//     cout << mapping["peace"] << endl;

//     //Searching
//     //return 1 if the key is present else return 0
//     cout<<mapping.count("peace")<<endl;

//     //It means iterator will iterate thru the map and if the key is not found
//     //then it will be at the end of the map and if it is not at the end of map then we found the key
//     if(mapping.find("peace") != mapping.end()) {
//         cout<<"Found"<<endl;
//     }
//     else {
//         cout<<"Not found"<<endl;
//     }

//     cout <<"Size of map: " << mapping.size() <<endl;
//     //Whenever we try to access value using square notations, if the key is present then it returns the value
//     //otherwise it makes a new entry in the table
//     cout<<mapping["soppycity"]<<endl;
//     cout <<"Size of map: " << mapping.size() <<endl;
// }


void countChar(unordered_map<char,int>&mapping,string str) {
    for(auto i : str) {
        // char ch = str[i];
        mapping[i]++;
    }
}

int main() {
    string str = "peacecool";
    unordered_map<char,int>mapping;
    countChar(mapping,str);

    for(auto i : mapping) {
        cout <<i.first << "->" << i.second <<endl; 
    }
}