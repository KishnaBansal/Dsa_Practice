#include<iostream>
using namespace std;

class Heap {
public:
    int *arr;
    int capacity;
    int size;
    Heap(int capacity) {
        this -> arr = new int[capacity];
        this -> capacity = capacity;
        //size = current number of elements in a heap
        this -> size = 0;
    }
    void insert(int val) {
        if(size == capacity) {
            cout<<"Heap Overflow"<<endl;
            return;
        }
        //size increase kar jayega
        size++;
        int index = size;
        arr[index] = val;

        //take the value to its correct position
        while(index > 1) {
            int parentIndex = index/2;
            if(arr[parentIndex] < arr[index]) {
                swap(arr[parentIndex],arr[index]);
                index = parentIndex;
            }
            else {
                break;
            }
        }
    }
    void printHeap() {
        for(int i=1;i<=size;i++) {
            cout<<arr[i]<<" ";
        }
    }
    
    int deleteHeap() {
        int ans = arr[1];
        //replacement
        arr[1] = arr[size];
        //last element ko delete uski original position se
        size--;

        int index = 1;
        while(index < size) {
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            //find out sabse bda kon
            int largestkaIndex = index;
            //check left child
            if(leftIndex <= size && arr[largestkaIndex] < arr[leftIndex]) {
                largestkaIndex = leftIndex;
            }
            //check right child
            if(rightIndex <= size && arr[largestkaIndex] < arr[rightIndex]) {
                largestkaIndex = rightIndex;
            }
            //no change
            if(index == largestkaIndex) {
                break;
            }
            else {
                swap(arr[index],arr[largestkaIndex]);
                index = largestkaIndex;
            }
        }
        return ans;
    }
};

void heapify(int *arr,int n,int index) {
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largestkaIndex = index;

    //teeno ka max
    if(leftIndex<=n && arr[largestkaIndex] < arr[leftIndex]) {
        largestkaIndex = leftIndex;
    }
    if(rightIndex<=n && arr[largestkaIndex] < arr[rightIndex]) {
        largestkaIndex = rightIndex;
    }
    //after these two conditions largestkaIndex variable will be pointing towards max value among three
    if(index != largestkaIndex) {
        swap(arr[index],arr[largestkaIndex]);
        //recursion
        index = largestkaIndex;
        heapify(arr,n,index);
    }
}

void buildHeap(int arr[],int n) {
    for(int index = n/2; index > 0;index--) {
        heapify(arr,n,index); 
    }
}

void heapSort(int arr[],int n) {
    while(n != 1) {
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}

int main() {
    // Heap h(20);
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // cout<<"Printing Heap: "<<endl;
    // h.printHeap();
    // h.deleteHeap();
    // cout<<endl;
    // h.printHeap();

    int arr[] = {-1,5,10,15,20,25,12};
    int n = 6;
    buildHeap(arr,6);
    cout<<"Printing heap: \n";
    for(int i=1;i<=6;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    cout<<"Printing heap: \n";
    for(int i=1;i<=6;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}