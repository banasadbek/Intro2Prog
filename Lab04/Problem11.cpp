//Problem 11
#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  if (n1%n2==0){
    cout<<n1<<" is divisible by "<<n2<<endl;
  }
  else{
    cout<<n1<<" is not divisible by "<<n2<<endl;
  }
  return 0;
}
