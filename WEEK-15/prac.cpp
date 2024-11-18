#include<iostream>
using namespace std;

class Heap{
public:
    int *arr;
    int cap;
    int size;
    Heap(int cap) {
        this -> arr = new int[cap];
        this -> cap = cap;
        this -> size = size;
    }
    void insertHeap(int data) {
        if(size == cap) {
            cout << "Overflow"<<endl;
        }
        //increasing size
        size++;
        int index = size;
        arr[index] = data;
        //Heapify
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
    void deleteHeap() {
        int ans = arr[1];
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index < size) {
            int leftIndex = 2*index;
            int rightIndex = 2*index + 1;
            //find out largest
            int large = index;
            //check left and right child
            if(leftIndex <= size && rightIndex)
        }
    }
};

int main() {
    
}