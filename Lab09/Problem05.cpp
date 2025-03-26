//Problem 5

#include <iostream>
using namespace std;

void descend(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    descend(n - 1);
}

int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    descend(number);
}