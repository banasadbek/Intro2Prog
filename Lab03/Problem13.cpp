//Problem 13
#include <iostream>
using namespace std;

int main() {
  float cost, vcost, bep;
  const int fixedcost = 10000;
  cout<<"Enter selling price per unit";
  cin>>cost;
  cout<<"Enter variable cost per unit: ";
  cin>>vcost;
  bep = fixedcost/(cost-vcost);
  cout<<"The break-even poinst: "<<bep;
}