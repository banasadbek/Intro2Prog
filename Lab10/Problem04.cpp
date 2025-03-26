//Problem 4
#include <iostream>
#include <climits>
using namespace std;


int indexOfLargestElement(double array[], int size){
    double largest = INT_MIN;
    int position=-1;
    if(size <= 0){
        return -1;
    }
    for(int i=0; i<size; i++){
        if(array[i]>largest){
            largest = array[i];
            position = i;
        }
        else if(array[i]==largest){
            position = i;
        }
    }
    return position;
}

int main(){
    int n;
    cin>>n;
    double myarray[n];
    cout << "Enter " << n << " numbers: ";
    for (int i=0; i<n; i++){
        cin>>myarray[i];
    }
    cout<<indexOfLargestElement(myarray, n);
    return 0;
}
