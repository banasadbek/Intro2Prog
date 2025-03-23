//Problem 14
#include <iostream>
using namespace std;
int main(){
  float weight1, weight2, price1, price2;
  cout << "Enter the weight and price for package 1: ";
  cin >> weight1 >> price1;
  cout << "Enter the weight and price for package 2: ";
  cin >> weight2 >> price2;
  if (price1/weight1 > price2/weight2){
     cout << "Package 2 has a better price" << endl;
  }
  else if (price2/weight2 > price1/weight1){
    cout << "Package 1 has a better price" << endl;
  }
  else{
    cout << "Two packages have the same price" << endl;
  }
  return 0;
}