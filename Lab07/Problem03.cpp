//Problem 3
#include <iostream>
using namespace std;
int balance=500;

int withdraw(int value){
  if (value>balance){
      return false;
  }
  else{
    balance-=value;
    return balance;;
  }
}

int deposit(int value){
    balance+=value;
    return balance;
}

int checkbalance(){
    return balance;
}

int main(){
  int value, option;
  do{
    cout<<"1.Deposit\n2.Withdraw\n3.Check balance\n4.Exit"<<endl;
    cin>>option;
    switch(option){
      case 1:cout<<"Enter the amount: ";
        cin>>value;
        cout<<"Deposit successfull!"<<endl;
        deposit(value);
        break;
      case 2:cout<<"Enter the amount: ";
        cin>>value;
        if (value>balance) {
          cout<<"Insufficient funds"<<endl;
        }
        else {
          cout<<"Withdraw successfull!"<<endl;
          withdraw(value);
        }
        break;
      case 3:cout<<"Your balance: "<<checkbalance()<<endl;
        break;
      case 4:break;
    }
  }while(option!=4);
}



