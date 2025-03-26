//Problem 10

#include <iostream>
#include <cmath>
using namespace std;

bool isPalindrome(int number, int num_digits = -1 ){
  if (number < 10){
    return true;
  }
  if (num_digits==-1){
    num_digits=log10(number)+1;
  }
  int firstDigit=number/pow(10, num_digits-1);
  int lastDigit=number%10;

  if (firstDigit!=lastDigit){
    return false;
  }

  int remaining_number = number%static_cast<int>(pow(10, num_digits-1));
  remaining_number = remaining_number/10;
  return isPalindrome(remaining_number, num_digits-2);
}

int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;

  if (isPalindrome(number)){
    cout<<"It's a palindrome";
  }
  else{
    cout<<"It's not a palindrome";
  }
  return 0;
}