//Problem 17
#include <iostream>
using namespace std;
int main() {
  float initial, final, inflation;
  cout<<"Enter initial price: ";
  cin>>initial;
  cout<<"Enter final price: ";
  cin>>final;
  inflation = (100*(final - initial)/initial);
  cout<<"Inflation: "<<inflation<<endl;
}