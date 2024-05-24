#include<iostream>
#include<vector>
using namespace std;

// void merge(int arr[],int s,int e,int m,vector<int>&temp) {
//     int i = s;
//     int j = m+1;
//     int k = s;

//     while(i<=m && j<=e) {
//         if(arr[i] < arr[j]) {
//             temp[k++] = arr[i++];
//         }
//         else {
//             temp[k++] = arr[j++];
//         }
//     }

//     while(i <= m) {
//         temp[k++] = arr[i++];
//     }
//     while(j <= e) {
//         temp[k++] = arr[j++];
//     }

//     while(s<=e) {
//         arr[s] = temp[s];
//         s++;
//     }
// }

// void mergeSort(int arr[],int s,int e,vector<int>&temp) {
//     //Base Case
//     if(s>=e) {return;}
//     int m = s+(e-s)/2;
//     //Divide
//     mergeSort(arr,s,m,temp);
//     mergeSort(arr,m+1,e,temp);
//     //Conquer
//     merge(arr,s,e,m,temp);
// }

// int main() {
//     int arr[] = {1,3,5,6,3,2}; 
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>temp(n,0);
//     int s = 0;
//     int e = n-1;
//     mergeSort(arr,s,e,temp);
//     for(int i = 0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

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
    // //Allocate Pointer
    // int *ptr = new int(5);
    // //Using malloc
    // int *ptrM = (int *)malloc(4);
    // *ptrM = 5;
    // cout<<*ptr<<" "<<*ptrM<<endl;
    // delete ptr;
    // free(ptrM);
    // cout<<*ptr<<endl;

    // //1-D Array
    // //using new
    // int *arr = new int[5];
    // int *arrM = (int *)malloc(5*sizeof(int));
    // for(int i = 0;i<5;i++) {
    //     int d;cin>>d;
    //     arr[i] = arrM[i] = d;
    // }
    // for(int i = 0;i<5;i++) {
    //     cout<<arr[i]<<" "<<arrM[i]<<endl;
    // }
    // delete[] arr;
    // free(arrM);


    //2-D Array
    int r = 5,c = 5;
    int **ptr2d = new int*[r];
    for(int i = 0;i<5;i++) {
        ptr2d[i] = new int[c];
    }
    int **ptr2dm = (int **)malloc(sizeof(int *) * r);
    for(int i = 0;i<5;i++) {
        ptr2dm[i] = (int *)malloc(sizeof(int *) * c);
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ptr2d[i][j] = 7;
            ptr2dm[i][j] = 8;
        }
    }
    print(ptr2d,5,5);
    print(ptr2dm,5,5);

    for(int i = 0;i<r;i++) {
        delete[] ptr2d[i];
    }
    delete[] ptr2d;

    for(int i = 0;i<r;i++) {
        free(ptr2dm[i]);
    }
    free(ptr2dm);
}