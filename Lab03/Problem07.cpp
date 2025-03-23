//Problem 7
#include <iostream>
using namespace std;
int main() {
  int dividend, divisor, quotient, remainder;
  cout<<"Enter dividend: ";
  cin>>dividend;
  cout<<"Enter divisor: ";
  cin>>divisor;
  quotient = dividend / divisor;
  remainder = dividend % divisor;
  cout<<"The quotient: "<<quotient<<endl;
  cout<<"The remainder: "<<remainder<<endl;
}