//Problem 2
#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    int myarray[n];
    cout << "Enter " << n << " numbers: ";
    for (int i=0; i<n; i++){
        cin>>myarray[i];
        sum+=myarray[i];
    }
    cout<<float(sum)/n;
    return 0;
}
