//Problem 14
#include <iostream>
using namespace std;
int main() {
  int binary, lastdigit, decimal=0, addition=1;
  cout<<"Enter Binary Number: ";
  cin>>binary;

  while(binary>0) {
    lastdigit = binary%10;

    if (lastdigit == 1) {
      decimal+=addition;
    }
    addition *=2;
    binary/=10;
  }
  cout<<decimal;
  return 0;
}
