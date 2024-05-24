#include<iostream>
using namespace std;

// int main() {
//     int a;
//     int arr[10];
//     cout<<&a<<endl;
//     cout<<arr<<endl<<&arr<<endl;
//     cout<<sizeof(arr)<<endl;
// }


// int main() {
//     int arr[] = {1,2,3,4};
//     int brr[5] = {1,2,3,4,5};
//     int crr[5] = {1,2};
//     //int drr[2] = {1,2,3};
// }


// int main() {
//     int arr[5] = {5,8,9,13,45};
//     cout<<arr[0]<<endl<<arr[2]<<endl;
//     int n=5;
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }



// int main() {
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


// int main() {
//     int arr[10];
//     int sum=0;
//     for(int i=0;i<10;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<10;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<10;i++) {
//         arr[i]=2*arr[i];
//     }
//     for(int i=0;i<10;i++) {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<10;i++) {
//         sum=sum+arr[i];
//     }
//     cout<<endl<<sum<<endl;
// }


// int main() {
//     int arr[5];
//     int sum=0;
//     for(int i=0;i<5;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<5;i++) {
//         sum=sum+arr[i];
//     }
//     cout<<endl<<sum<<endl;
// }


// int main() {
//     int arr[5];
//     int key;
//     cin>>key;
//     bool flag=0;
//     for(int i=0;i<5;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++) {
//         if(arr[i]==key) {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1) {
//         cout<<"Key found";
//     }
//     else {
//         cout<<"Key not found";
//     }
// }




//--------------------------------------------------------------------------------------------------------------------------------

//ARRAYS AND FUNCTIONS

// void printArr(int arr[],int size) {
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// int main() {
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     printArr(arr,size);
// }



// bool linearSearch(int arr[],int size,int key) {
//     for(int i=0;i<size;i++) {
//         if(arr[i]==key) {
//             return true;
//         }
//     }
//     return false;
// }
// int main() {
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     int key=24;
//     bool isLinearSearch = linearSearch(arr,size,key);
//     if(isLinearSearch) {
//         cout<<"Key found"<<endl;
//     }
//     else {
//         cout<<"Key not found"<<endl;
//     }
// }


// void ZeroOneCount(int arr[],int size) {
//     int c0=0,c1=0,c2=0;
//     for(int i=0;i<8;i++) {
//         if(arr[i]==1) {
//             c1++;
//         }
//         else if(arr[i]==0) {
//             c0++;
//         }
//         else {
//             c2++;
//         }
//     }
//     cout<<c0<<" "<<c1<<" "<<c2<<endl;
// }
// int main() {
//     int arr[]={1,0,1,1,0,0,1,0};
//     int c0=0,c1=0,c2=0,size=8;
//     ZeroOneCount(arr,size); 
// }



//-------------------------------------------------

// #include<limits.h>
// int findMin(int arr[],int size) {
//     int minAns=INT_MAX;
//     for(int i=0;i<size;i++) {
//         if(arr[i]<minAns) {
//             minAns=arr[i];
//         }
//     }
//     return minAns;
// }
// int main() {
//     int arr[]={-10,8,31,4,3,1,51};
//     int size=7;
//     int min=findMin(arr,size);
//     cout<<min<<endl;
// }

//-----------------------------------------------

// void revArray(int arr[],int size) {
//     int left=0;
//     int right=size-1;
//     while(left<=right) {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
//     //Using for loop
//     // for(int left=0,right=size-1;left<=right;left++,right--) {
//     //     swap(arr[left],arr[right]);
//     // }
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// int main() {
//     int arr[7]={10,20,30,40,50,60,70};
//     int size=7;
//     revArray(arr,size);
// }



// void extremePrint(int arr[],int size) {
//     int left=0;
//     int right=size-1;

//     while(left<=right) {
//         if(left==right) {
//             cout<<arr[left]<<endl;
//         }
//         else {
//             cout<<arr[left]<<endl;
//             cout<<arr[right]<<endl;
//         }
//         left++;
//         right--;
//     }
// }
// int main() {
//     int arr[5]={10,20,30,40,50};
//     int size=5;
//     extremePrint(arr,size);
// }


//-----------------------------------------------------------

// int getUnique(int arr[],int size) {
//     int ans=0;
//     for(int i=0;i<size;i++) {
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main() {
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++) {
//         cin>>arr[i];
//     }
//     int finalAns = getUnique(arr,size);
//     cout<<finalAns<<endl;
// }


// int main() {
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<size;i++) {
//         for(int j=0;j<size;j++) {
//             cout<<arr[i]<<","<<arr[j]<<" Sum of these is "<<arr[i]+arr[j]<<endl;
//         }
//     }
// }

// int main() {
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++) {
//         cin>>arr[i];
//     }
//     for(int i=0;i<size;i++) {
//         for(int j=0;j<size;j++) {
//             for(int k=0;k<size;k++) {
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" Sum of these is "<<arr[i]+arr[j]+arr[k]<<endl;
//             }
//         }
//     }
// }

//-----------------------------------------------------------------------------

// void ZeroOneSort(int arr[],int size) {
//     int zeroCount=0;
//     int oneCount=0;
//     for(int i=0;i<size;i++) {
//         if(arr[i]==0) {
//             zeroCount++;
//         }
//         if(arr[i]==1) {
//             oneCount++;
//         }
//     }
//     int i;
//     // for(i=0;i<zeroCount;i++) {
//     //     arr[i]=0;
//     // }
//     // for(int j=i;j<size;j++) {
//     //     arr[j]=1;
//     // }

//     //EASY WAY

//     while(zeroCount--) {
//         arr[i]=0;
//         i++;
//     }
//     while(oneCount--) {
//         arr[i]=1;
//         i++;
//     }

// }

// int main() {
//     int arr[]={1,0,1,0,0,1,0};
//     int size=7;
//     ZeroOneSort(arr,size);
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


// int main() {
//     int arr[6] = {1,0,0,1,0};
//     int size = 6;
//     int l=0;
//     int h=size-1;
//     while(l<h) {
//         while(arr[l]==0 && l<h) {
//             l++;
//         }
//         while(arr[h]==1 && l<h) {
//             h--;
//         }
//         swap(arr[l],arr[h]);
//         l++;
//         h--;
//     }
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


//-------------------------------------------------------------

// void shiftbyone(int arr[],int size) {
//     int temp=arr[size-1];
//     for(int i=size-1;i>0;i--    ) {
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
// }
// int main() {
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++) {
//         cin>>arr[i];
//     }
//     shiftbyone(arr,size);
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

//   int main() {
//         int arr[5] = {1,2,3,4,5};
//         int n=5;
//         int temp;
//         temp=arr[0];
//         for(int i=0;i>n;i++) {
//             arr[i]=arr[i+1];
//         }
//         arr[n-1]=temp;
//         for(int i=0;i<n;i++) {
//             cout<<arr[i]<<" ";
//         }
//     }





//  int main() {
//         int arr[5] = {1,2,3,4,5};
//         int n=5;
//         int k;
//         cin>>k;
//         int temp[k];
//         for(int i=0;i<k;i++) {
//             temp[i]=arr[n-1];
//             n=n-2;
//         }
//         for(int i=n-1;i>0;i--) {
//             arr[i]=arr[i-2];
//         }
//         // for(int i=0;i<k;i++) {
//         //     arr[i]=temp[i];
//         // }
//         // for(int i=0;i<n;i++) {
//         //     cout<<arr[i]<<" ";
//         // }
//         arr[0]=temp[0];
//         arr[1]=temp[1];
//         for(int i=0;i<n;i++) {
//             cout<<arr[i]<<" ";
//         }
//     }