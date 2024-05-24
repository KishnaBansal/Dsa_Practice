#include <iostream>
#include <vector>
using namespace std;

// void printPermutation(string str,int i) {
//     //Base Case
//     if(i >= str.length()) {
//         cout<<str<<" ";
//         return;
//     }

//     for(int j = i;j < str.length();j++) {
//         swap(str[i],str[j]);
//         //Recursion
//         printPermutation(str,i+1);
//     }
// }

// int main() {
//     string str = "abc";
//     printPermutation(str,0);
// }


//Passing the String by Reference 

// void printPermutation(string &str,int i) {
//     //Base Case
//     if(i >= str.length()) {
//         cout<<str<<" ";
//         return;
//     }

//     for(int j = i;j < str.length();j++) {
//         swap(str[i],str[j]);
//         //Recursion
//         printPermutation(str,i+1);
//         //Backtracking
//         swap(str[i],str[j]);
//     }
// }

// int main() {
//     string str = "abc";
//     printPermutation(str,0);
// }


//Rat in a Maze 


bool isSafe(int srccx,int srcy,int newx,int newy,int maze[][4],int row,int col,vector<vector<bool>> &visited) {
    if((maze[newx][newy] == 1) && 
        (newx>=0 && newx < row) && (newy>=0 && newy<col) &&
        (visited[newx][newy] == false)
    ) {
        return true;
    }
    else {
        return  false;
    }
}

void printAllPaths(int maze[][4],int row,int col,int srcx,int srcy,string op,vector<vector<bool>> &visited) {
    //Base Case
    //Destination coordinates are [row-1],[col-1]
    if(srcx == row-1 && srcy == col-1) {
        cout<<op<<endl;
        return;
    }

    //Recursion

    //UP
    int newx = srcx-1;
    int newy = srcy;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)) {
        //mark visited
        visited[newx][newy] = true;
        //call recursion
        printAllPaths(maze,row,col,newx,newy,op + 'U',visited);
        //backtracking
        visited[newx][newy] = false;

        // //Sometimes it does not work so add symbol to op string externally and then remove it via backtracking
        // //call recursion
        // op.push_back('U');
        // printAllPaths(maze,row,col,newx,newy,op,visited);
        // //backtracking
        // op.pop_back();
        // visited[newx][newy] = false;
    }

    //RIGHT
    newx = srcx;
    newy = srcy+1;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)) {
        //mark visited
        visited[newx][newy] = true;
        //call recursion
        printAllPaths(maze,row,col,newx,newy,op + 'R',visited);
        //backtracking
        visited[newx][newy] = false;
    }

    //DOWN
    newx = srcx+1;
    newy = srcy;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)) {
        //mark visited
        visited[newx][newy] = true;
        //call recursion
        printAllPaths(maze,row,col,newx,newy,op + 'D',visited);
        //backtracking
        visited[newx][newy] = false;
    }

    //LEFT
    newx = srcx;
    newy = srcy-1;
    if(isSafe(srcx,srcy,newx,newy,maze,row,col,visited)) {
        //mark visited
        visited[newx][newy] = true;
        //call recursion
        printAllPaths(maze,row,col,newx,newy,op + 'L',visited);
        //backtracking
        visited[newx][newy] = false;
    }
}

int main() {
    int maze[4][4] = {
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row = 4;
    int col = 4;

    int srcx = 0;
    int srcy = 0;
    string op = "";

    //Create visited array
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    if(maze[0][0] == 0) {
        //src position is closed that means it cannot move
        cout<<"No position exists"<<endl;
    }
    else {
        visited[srcx][srcy] = true; //Visited
        printAllPaths(maze,row,col,srcx,srcy,op,visited);
    }
}