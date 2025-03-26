//Problem 7
#include <iostream>
using namespace std;

int main(){
  int size, temp;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int array[size];
  cout<<"Enter the "<<size<<" numbers: ";
  for(int i=0; i<size; i++){
    cin>>array[i];
  }
  for(int i=0; i<size-1; i++){
    for(int j=0; j<size-1; j++){
      if(array[j+1]<array[j]){
        temp=array[j+1];
        array[j+1]=array[j];
        array[j]=temp;
      }
    }
  }
  for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
  }
}