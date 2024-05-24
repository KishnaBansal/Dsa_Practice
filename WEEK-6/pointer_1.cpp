#include<iostream>
using namespace std;
// int main() {
//     int a = 5;
//     cout<<a<<endl;
//     cout<<&a<<endl;

//     int *ptr = &a;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<&ptr<<endl;
// }

// int main() {
//     int a=5;
//     int *ptr=&a;
//     cout<<sizeof(ptr)<<endl;
//     char ch = '1';
//     char *ptrch = &ch;
//     cout<<sizeof(ptrch)<<endl;
//     long l = 12;
//     long *lptr = &l;
//     cout<<sizeof(lptr)<<endl;
// }

// int main() {
//     int a=100;
//     int *ptr = &a;
//     a=a+1;
//     cout<<ptr<<endl;
//     ptr=ptr+1;
//     cout<<a<<endl;
//     cout<<ptr<<endl;
// }

// int main() {
//     int a = 5;
//     int* p = &a;
//     p = p + 1;
//     cout<<p<<endl;
// }


//When you declare an array, it represents a fixed block of memory.
//The name of the array (arr in this case) is essentially a pointer to the first element.
//The expression arr + 1 calculates the address of the second element in the array (i.e., &arr[1]).
//But trying to assign this new address back to the entire array (arr) is not allowed
// int main() {
//     int arr[5] = {10,20,30,40,50};
//     arr=arr+1;
// }


// int main() {
//     int a[4] = {10,20,30,40};
//     int *p = a;
//     int *q = a+1;
//     cout<<*(q+4)<<endl;
// }

// int main() {
//     char ch = 'a';
//     char *cptr = &ch;
//     cout<<cptr;
// }

int main() {
    char ch[10] = "awfsd";
    char *cptr = &ch[0];  
    cout<<ch<<endl;
    cout<<cptr<<endl;
    cout<<&ch<<endl;
    cout<<*(ch+3)<<endl;
    cout<<&cptr<<endl;
    cout<<*(cptr+3)<<endl;
    cout<<cptr+2<<endl;
    cout<<cptr+8<<endl;
}