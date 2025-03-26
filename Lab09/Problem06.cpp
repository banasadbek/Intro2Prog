//Problem 6

#include <iostream>
using namespace std;

int counter(int n) {
    if (n==0) {
        return 0;
    }
    return counter(n/10)+1;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<counter(n);
}