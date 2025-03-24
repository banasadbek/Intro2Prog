//Problem 12
#include <iostream>
using namespace std;
int main() {
  int number;
  cin>>number;
  while(number>0) {
    cout<<number%10;
    number = number/10;
  }
}