//Problem 4

#include <iostream>
using namespace std;
int price = 0;

int totalPrice(int choice, int qty){
  switch(choice){
    case 1:price+=qty*8; return price;
      break;
    case 2:price+=qty*10; return price;
      break;
    case 3:price+=qty*12; return price;
      break;
    default:price+=0; return price;
  }
}

int main() {
  int choice, qty;
  do{
    cout<<"Welcome!"<<endl;
    cout<<"1. Movie A: $8"<<endl;
    cout<<"2. Movie B: $10"<<endl;
    cout<<"3. Movie C: $12"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>choice;
    cout<<"Enter the number of tickets : ";
    if (choice!=4) {
      cin>>qty;
      price = totalPrice(choice, qty);
    }



    }
    while(choice!=4);
    cout<<"Total price of your tickets: $"<<price<<endl;
}
