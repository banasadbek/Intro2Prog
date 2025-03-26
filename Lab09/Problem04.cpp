//Problem 4

#include <iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"The sum of all numbers until "<<number<<" is "<<sum(number);
    return 0;
}

