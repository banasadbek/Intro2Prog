//Problem 2
#include <iostream>
using namespace std;
int isprime(int number){
    for(int i=2; i<=number/2; i++) {
        if (number%i==0) {
            return true;
        }
    }
    return false;
}

int main() {
    int number, count=0;
    cout<<"Enter a number: ";
    cin>>number;
    if(isprime(number)) {
      cout<<number<<"No"<<endl;
    }
    else {
      cout<<number<<"Yes"<<endl;
    }
    return 0;
}
