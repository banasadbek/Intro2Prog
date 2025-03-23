//Problem 11
#include <iostream>
using namespace std;
int main() {
  float distance=450, time=2, kmph, mph;
  kmph = distance / time;
  mph = kmph*0.62137;
  cout<<"The velocity of Afrosiyob in km/h: "<<distance/time<<endl;
  cout<<"The velocity of Afrosiyob in miles/h: "<<distance/time*0.62137  <<endl;
}