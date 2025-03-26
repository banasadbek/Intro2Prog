//Problem 5

#include <iostream>
using namespace std;

int totalFare(int price, int choice, int qty){
    switch(choice){
        case 1:price+=qty*15;
        break;
        case 2:price+=qty*20;
        break;
        case 3:price+=qty*25;
        break;
        default:cout<<"Invalid choice"<<endl;
    }
    return price;
}

int main() {
    int choice, qty, price=0;
    do{
        cout << "\nTrain Ticket Booking System\n";
        cout<<"1. Train X: $15"<<endl;
        cout<<"2. Train Y: $20"<<endl;
        cout<<"3. Train Z: $25"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice==4) break;
        cout<<"Enter the number of tickets: ";
        cin>>qty;
        price = totalFare(price, choice, qty);
    }
    while(choice!=4);

    cout<<"Total price of your tickets: $"<<price<<endl;
    return 0;
}
