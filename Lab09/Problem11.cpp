//Problem 11

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number, int divisor=-1){
  if(number==1 || number==2){
    return true;
  }
  if(divisor==-1){
    divisor = sqrt(number);
  }
  if(divisor==1){
    return true;
  }
  if(number%divisor==0){
    return false;
  }
  else{
    return isPrime(number, divisor-1);
  }
}

int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  if(isPrime(number)) {
    cout<<number<<" is a prime number";
  }
  else {
    cout<<number<<" is not a prime number";
  }
  return 0;
}
