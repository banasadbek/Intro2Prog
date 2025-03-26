//#include <iostream>
#include <iostream>
using namespace std;
#include <climits>

int main(){
    int n;
    int smallest=INT_MAX;
    cout<<"Enter the value of n: ";
    cin>>n;
    int myarray[n];
    cout << "Enter " << n << " numbers: ";
    for (int i=0; i<n; i++){
        cin>>myarray[i];
        if(myarray[i]<smallest){
            smallest = myarray[i];
        }
    }
    cout<<"Min = "<<smallest;
    return 0;
}
