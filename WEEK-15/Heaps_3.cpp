#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Info {
public:    
    int data;
    int rowIndex;
    int colIndex;
    Info(int data,int r,int c) {
        this -> data = data;
        this -> rowIndex = r;
        this -> colIndex = c;
    }
};

class compare{
    public:
        bool operator()(Info*a,Info*b) {
            return a->data > b->data;
        }
};

void mergeKsortedArray(int arr[][4],int n,int k,vector<int>&ans) {
    priority_queue< Info*, vector<Info*>, compare>pq;

    //compare first k elements (har array ka pehla element)
    for(int row=0;row<k;row++) {
        int ele = arr[row][0];
        Info* temp = new Info(ele,row,0);
        pq.push(temp);
    }

    while(!pq.empty()) {
        Info* temp = pq.top();
        pq.pop();
        int topData = temp -> data;
        int topRow = temp -> rowIndex;
        int topCol = temp -> colIndex;

        //store in ans
        ans.push_back(topData);
        //next element for the same row jisme se just abhi pop kiya hai uska element insert krna hai
        if(topCol + 1 < n) {
            //more elements are there in the row
            Info* newInfo = new Info(arr[topRow][topCol+1],topRow,topCol+1);
            pq.push(newInfo);
        }

    }
} 

int main() {
    int arr[3][4] = {
        {1,4,8,11},
        {2,3,6,10},
        {5,7,12,14},
    };
    int n = 4;
    int k = 3;
    vector<int>ans;
    mergeKsortedArray(arr,n,k,ans);

    //printing ans
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
} 