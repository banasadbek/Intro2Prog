//Problem 7

#include <iostream>
using namespace std;

int summer(int n) {
    if (n==0) {
        return 0;
    }
    return summer(n/10)+n%10;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<summer(n);
}