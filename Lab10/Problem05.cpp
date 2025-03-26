//Problem 5
#include <iostream>
using namespace std;

bool strictlyEqual(const int a[], const int b[], int n){
  for (int i = 1; i <=n; i++){
    if (a[i] != b[i]){
      return false;
    }
  }
  return true;
}

int main() {
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int firstarray[size], secondarray[size];
  cout<<"Enter "<<size<<" numbers for the first array: ";
  for(int i=1; i<=size; i++){
    cin>>firstarray[i];
  }
  cout<<"Enter "<<size<<" numbers for the second array: ";
  for(int i=1; i<=size; i++){
    cin>>secondarray[i];
  }

  if(strictlyEqual(firstarray, secondarray, size)){
    cout<<"Two lists are strictly equal";
  }
  else{
    cout<<"Two lists are not strictly equal";
  }

}