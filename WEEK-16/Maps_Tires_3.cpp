#include<iostream>
#include<unordered_map>
#include<vector>
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

void storeString(TrieNode* root,vector<string>&ans,string &input,string &prefix) {
    //Base Case
    if(root->isTerminal == true) {
        ans.push_back(prefix + input);      
    }
    for(char ch='a';ch<='z';ch++) {
        int index = ch-'a';
        TrieNode* next = root->children[index];
        if(next != NULL) {
            //child exists
            input.push_back(ch);
            //recursion
            storeString(next,ans,input,prefix);
            //backtrack
            input.pop_back();
        }
    }
}

void findPrefixString(TrieNode* root,string input,vector<string>&ans,string &prefix) {
    //base case
    if(input.length() == 0) {
        TrieNode* lastChar = root;
        storeString(lastChar,ans,input,prefix);
        return;
    }
    char ch = input[0];
    int index = ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL) {
        //child present
        child = root->children[index];
    }
    else {
        return;
    }
    //recursion
    findPrefixString(child,input.substr(1),ans,prefix);
}

vector<vector<string>> getSuggestions(TrieNode* root,string input) {
    
    vector<vector<string>> output;
    TrieNode* prev = root;
    string inputHelper = "";

    for(int i=0;i<input.length();i++) {
        char lastChar = input[i];
        int index = lastChar - 'a';
        TrieNode* curr = prev->children[index];

        if(curr == NULL) {
            break;
        }
        else {
            vector<string> nicheKaAns;
            inputHelper.push_back(lastChar);
            string dummy = "";
            storeString(curr,nicheKaAns,inputHelper,dummy);
            output.push_back(nicheKaAns);
            prev = curr;
        }
    }
    return output;
}

int main() {
    TrieNode* root = new TrieNode('-');
    // insertWord(root,"dona");
    
    insertWord(root,"cater");
    insertWord(root,"com");
    insertWord(root,"lover");
    insertWord(root,"loved");
    insertWord(root,"load");
    insertWord(root,"lov");
    insertWord(root,"bat");
    insertWord(root,"cat");
    insertWord(root,"car");

    // cout << "Insertion Done" << endl;

    // if(searchWord(root,"lov")) {
    //     cout<<"found"<<endl;
    // }
    // else {
    //     cout<<"not found"<<endl;
    // }

    // deleteWord(root,"lov");
    // cout<<"After Deleting"<<endl;

    // if(searchWord(root,"lov")) {
    //     cout<<"found"<<endl;
    // }
    // else {
    //     cout<<"not found"<<endl;
    // }

    string input = "";
    string prefix = input;
    vector<string>ans;

    findPrefixString(root,input,ans,prefix);

    for(auto i : ans) {
        cout << i <<" ";
    }

    cout<<endl;

    // vector<vector<string>>ans = getSuggestions(root,"loa");
    // for(int i=0;i<ans.size();i++) {
    //     cout << i <<"->";
    //     for(auto str : ans[i]) {
    //         cout << str <<", ";
    //     }
    //     cout<<endl;
    // }
}