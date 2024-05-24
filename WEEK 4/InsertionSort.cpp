#include <iostream>
#include <vector>

using namespace std;


void print(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void insertionSort(vector<int> &arr) {
  int n = arr.size();
  // i = 0, chhod deta hu
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;

    // Move elements of arr[0..i-1] that are greater than
    // key to one position ahead of theri current position
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key; // insertion
  }
}



int main() {
  vector<int> v1 = {44,33,55,22,11};
  // bubbleSort(v);
  // selectionSort(v);
  insertionSort(v1);
  print(v1);
  return 0;
}