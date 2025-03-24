//Problem 6
#include <iostream>
using namespace std;
int main(){
  int n1, n2, temp;
  cout<<"Enter two numbers: ";
  cin>>n1>>n2;
  while (n2!=0){
    temp = n1;
    n1 = n2;
    n2 = temp%n2;
  }
  cout<<"GCD: "<<n1<<endl;
  return 0;
}