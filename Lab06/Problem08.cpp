//Problem 8
#include <iostream>
using namespace std;
void banking(int value){
  int balance = 500;
  bool flag = true;
  while(flag){
    if(balance==0 || value == 0){
      flag = false;
      cout<<"Remaining balance: "<<"$"<<balance<<endl;
    }
    else if (balance-value<0) {
      cout<<"Insufficient funds!"<<endl;
      cout<<"Enter withdrawal amount (or 0 to cancel): ";
      cin>>value;
      balance -= value;
      cout<<"Remaining balance: "<<"$"<<balance<<endl;

    }
    else{
      balance -= value;
      cout<<"Remaining balance: "<<"$"<<balance<<endl;
      cout<<"Enter withdrawal amount (or 0 to cancel): ";
      cin>>value;
    }
  }
}
int main(){
  int value;
  cout<<"Your balance: $500"<<endl;
  cout<<"Enter withdrawal amount: ";
  cin>>value;

  banking(value);
  return 0;
}