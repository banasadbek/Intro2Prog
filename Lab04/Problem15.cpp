//Problem 15
#include <iostream>
using namespace std;
int main() {
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  if(number>1000 || number<100){
    cout<<"Invalid Input, enter three digit number"<<endl;
  }
  else if (number%10==number/100){
      cout<<"The number is palindrome"<<endl;}
  else{
    cout<<"The number is not palindrome"<<endl;
  }
  return 0;
}