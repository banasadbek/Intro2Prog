//Problem 8

#include <iostream>
using namespace std;
int main() {
  float uzs, usd, exchange_rate;
  cout<<"Enter UZS amount: ";
  cin>>uzs;
  cout<<"Enter exchange rate: ";
  cin>>exchange_rate;
  cout<<"The amount in USD: "<<uzs/exchange_rate<<endl;
}