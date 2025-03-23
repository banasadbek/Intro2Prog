//Problem 20
#include <iostream>
using namespace std;
int main() {
  float P, R, A;
  cout<<"Enter Principal Number: ";
  cin>>P;
  cout<<"Enter Rate of Interest: ";
  cin>>R;
  A = P*(1+R/100)*(1+R/100);
  cout<<"The compound interest after 2 years: "<<A-P<<endl;
  cout<<"The amount after 2 years: "<<A;
}