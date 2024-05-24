#include<iostream>
#include<vector>
using namespace std;

// //Merge Sort by using only one time dynamic memory allocation 
// void merge(vector<int>&v,vector<int>&temp,int n,int s,int m,int e) {
//     int i = s;
//     int j = m+1;
//     // first array = start -> mid
//     // second array = mid + 1 -> end
//     // merged array => start -> end
//     int k = s;
//     while(i<=m  && j<=e) {
//         if(v[i] <= v[j]) {
//             temp[k++] = v[i++];
//         }
//         else {
//             temp[k++] = v[j++];
//         }
//     }  
//     // handle remaining elements in case of diff array size
//     while(i<=m) {
//         temp[k++] = v[i++];
//     }
//     while(j<=e) {
//         temp[k++] = v[j++];
//     }
//     // let's copy merged data
//     while(s<=e) {
//         v[s] = temp[s];
//         s++;
//     }
// }

// void mergeSort(vector<int>&v,vector<int>&temp,int n,int s,int e) {
//     //Base Case
//     if(s>=e) {
//         return;
//     }
//     int m = s+(e-s)/2;
//     //Divide
//     mergeSort(v,temp,n,s,m);
//     mergeSort(v,temp,n,m+1,e);
//     //Conquer
//     merge(v,temp,n,s,m,e);
// }

// int main() {
//     vector<int>v{2,4,54,6,2,4};
//     int n = v.size();
//     vector<int>temp(v.size(),0);
//     mergeSort(v,temp,n,0,n-1);
//     for(int i = 0;i<n;i++) {
//         cout<<v[i]<<" ";
//     }
// }


//Dynamic Memory Allocation

void print(int **v, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // //1.Allocate Int
    // int *ptr = new int(5);
    // //Using malloc
    // int *mptr = (int *)malloc(4);
    // *mptr = 5;
    // cout<<*ptr<<" "<<*mptr<<endl;
    // delete ptr;
    // free(mptr);

    // //1-D Array
    // //1.Using new
    // int *arr = new int[5];
    // //Using 2-D Array
    // int *arrMalloc = (int *)malloc(5*sizeof(int));
    // for(int i = 0;i<5;i++) {
    //     int d;cin>>d;
    //     arr[i] = arrMalloc[i] = d;
    // }
    // for(int i = 0;i<5;i++) {
    //     cout<<arr[i]<<" "<<arrMalloc[i]<<endl;
    // }
    // delete[] arr;
    // free(arrMalloc);

    //2-D Allocation
    int rows = 5, cols = 5;
    int **ptr2d = new int *[rows];

    for (int i = 0; i < rows; ++i)
        ptr2d[i] = new int[cols];

    int **ptr2dmalloc = (int **)malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++)
        ptr2dmalloc[i] = (int *)malloc(sizeof(int) * cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ptr2d[i][j] = 7;
            ptr2dmalloc[i][j] = 8;
        }
    }

    print(ptr2d, rows, cols);
    print(ptr2dmalloc, rows, cols);

    for (int i = 0; i < rows; ++i)
        delete[] ptr2d[i];
    delete[] ptr2d;

    for (int i = 0; i < rows; ++i)
        free(ptr2dmalloc[i]);
    free(ptr2dmalloc);
    return 0;   
}