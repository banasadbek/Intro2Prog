//Problem 9

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
  for(int i=end; i>=start; i--){
    cout <<arr[i]<<" ";
  }
}

int main(){
  int size, array[size];
  cout << "Enter the size of the array: ";
  cin >> size;
  cout << "Enter "<<size<<" numbers: ";
  for(int i=0; i<size; i++){
    cin >> array[i];
  }
  reverseArray(array, 0, size-1);
}
