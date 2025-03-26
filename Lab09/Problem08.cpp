//Problem 8

#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp==0) {
        return 1;
    }
    return base*power(base,exp-1);
}

int main() {
    int base, exponent;
    cout<<"Enter the base and exponent: ";
    cin>>base>>exponent;
    cout<<power(base, exponent);
}
