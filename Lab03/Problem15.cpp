//Problem 15
#include <iostream>
using namespace std;
int main() {
  float price, discount;
  cout<<"Enter price: ";
  cin>>price;
  cout<<"Enter discount: ";
  cin>>discount;
  cout<<"Total discount: "<<price*(discount/100)<<endl;
  cout<<"Final proce: "<<price*(100-discount)/100<<endl;

}