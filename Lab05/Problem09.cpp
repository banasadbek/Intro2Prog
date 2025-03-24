//Problem 9
#include <iostream>
using namespace std;

int isprime(int number){
  for(int i=2;i<=number/2;i++){
    if(number%i==0){
      return true;
    }
  }
  return false;
}

int main() {
  int n;
  cin>>n;
  if(isprime(n)){
    cout<<"Number is not prime"<<endl;
  }
  else{
    cout<<"Number is prime"<<endl;
  }
  return 0;
}
