//Problem 2

#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return factorial(n-1)*n;
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<number<<"Factorial of "<<number<<" is "<<factorial(number);
}
