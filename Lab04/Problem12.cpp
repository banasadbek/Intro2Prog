//Problem 12

#include <iostream>
using namespace std;

int main(){
  int side1, side2, side3;
  cout << "Enter three sides: ";
  cin >> side1 >> side2 >> side3;
  if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
    cout<<"The triangle is valid";
  }
  else{
    cout<<"The triangle is not valid";
  }
  return 0;
}