//Problem 9

#include <iostream>
using namespace std;

void reverse(int n) {
    if(n == 0) {
        return;
    }
    cout << n%10;
    reverse(n/10);
}

int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    reverse(number);
}