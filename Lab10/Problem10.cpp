//Problem 10
#include <iostream>
using namespace std;

int main(){
    int size, temp;
    bool flag = true;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the "<<size<<" numbers: ";
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    for(int j=0; j<size-1; j++){
            if(array[j+1]<array[j]){
                flag = false;
            }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
}