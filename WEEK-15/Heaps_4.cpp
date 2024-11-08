#include<iostream>
#include<queue>
// #include<iostream>
using namespace std;

void solveForMedian(double &median, priority_queue<int>&maxi, priority_queue<int,vector<int>, greater<int> >&mini,int ele) {
    
    //3 cases

    if(maxi.size() == mini.size()) {
        //Insertion
        if(ele > median) {
            mini.push(ele);
            //Size of mini will be greater
            median = mini.top();
        }
        else {
            maxi.push(ele);
            //Size of maxi will be greater
            median = maxi.top();
        }
    }
    else if(maxi.size() == mini.size()+1) {
        //Insertion
        if(ele > median) {
            mini.push(ele);
        }
        else {
            mini.push(maxi.top());
            maxi.pop();
            maxi.push(ele);
        }
        //Since ab dono heaps ka size equal hojayega to median will be the average
        median = (mini.top()+maxi.top())/2; 
    }
    else if(maxi.size()+1 == mini.size()) {
        //Insertion
        if(ele > median) {
            maxi.push(mini.top());
            mini.pop();
            mini.push(ele);
        }
        else {
            maxi.push(ele);
        }
        //Since ab dono heaps ka size equal hojayega to median will be the average
        median = (mini.top()+maxi.top())/2.0; 
    }
}

int main() {
    int arr[] = {12,10,8,4,2,3,15};
    int n = 7;
    double median = 0;
    priority_queue<int>maxi;
    priority_queue<int,vector<int>, greater<int> >mini;
    for(int i=0;i<7;i++) {
        int ele = arr[i];
        solveForMedian(median, maxi, mini, ele);
        cout<<"Median found: "<< median << endl;
    }

}