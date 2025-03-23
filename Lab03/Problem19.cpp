//Problem 19
#include <iostream>
using namespace std;
int main() {
  float P, R, T, SI;
  cout<<"Enter the principal amount, rate of interest, number of years: ";
  cin>>P>>R>>T;
  SI = P*R*T/100;
  cout<<"The simple interest is: "<<SI<<endl;
}