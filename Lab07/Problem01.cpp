//Problem 1
#include <iostream>
using namespace std;

int bill(int sum, int option){
  switch(option){
    case 1:sum+=20;
    break;
    case 2:sum+=8;
    break;
    case 3:sum+=5;
    break;
    default:sum+=0;
    break;
  }
  return sum;
}

int main(){
  int option, sum=0;
  bool flag=true;
  do{
    cout<<"1. Pizza - $20"<<endl<<"2. Burger - $8"<<endl<<"3. Salad - $5"<<endl<<"4. Exit"<<endl;
    cout<<"Enter your option: ";
    cin>>option;
    sum = bill(sum, option);
    if(option==4) {
      flag=false;
    }
  }
  while(flag);
  cout<<"Total order price: $"<<sum<<endl;
  return 0;
}
