//Problem 5

#include <iostream>
using namespace std;

int main() {
  double costperitem;
  int quantity;
  float totalprice;
  cout << "Enter cost per item: ";
  cin >> costperitem;
  cout << "Enter quantity: ";
  cin >> quantity;
  totalprice = costperitem*quantity;
  cout<<"Total price: "<<totalprice<<endl;
}