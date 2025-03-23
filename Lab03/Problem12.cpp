//Problem 12
#include <iostream>
using namespace std;
int main() {
  int minutes, hours;
  cout<<"Enter minutes: ";
  cin>>minutes;
  hours = minutes/60;
  cout<<minutes<<" = "<<hours<<" hours and "<<minutes%60<<" minutes"<<endl;
}