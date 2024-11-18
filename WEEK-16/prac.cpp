#include<iostream>
#include<unordered_map>
using namespace std;

class TrieNode {
public:
    int data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(int val) {
        this -> data = val;
        for(int i=0;i<26;i++) {
            children[i] = NULL;
        }
        this -> isTerminal = false;
    }
};

void insertWord(TrieNode* root,string word) {
    // cout<<"For Insertion: "<<word<<endl;
    //base case
    if(word.length() == 0) {
        root -> isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL) {
        //present
        child = root->children[index];
    }
    else {
        //absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    //recursion
    insertWord(child,word.substr(1));   //First char will get removed and other will be a substring
}

bool searchWord(TrieNode* root,string word) {
    //base case
    if(word.length() == 0) {
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    if(root->children[index] != NULL) {
        //present or found
        child = root->children[index];
    }
    else {
        //not found
        return false;
    }
    //recursion
    bool recAns = searchWord(child,word.substr(1));
    return recAns;
}

void deleteWord(TrieNode* root,string word) {
    //base case
    if(word.length() == 0) {
        root->isTerminal = false;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL) {
        //present
        child = root->children[index];
    }
    else {
        //absent
        return;
    }
    //recursion
    deleteWord(child,word.substr(1));
}