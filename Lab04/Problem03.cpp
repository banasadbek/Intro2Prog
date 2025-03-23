//Problem 3
#include <iostream>
using namespace std;
int main() {
  float n1, n2;
  cout<<"Enter two numbers: ";
  cin>>n1>>n2;
  if(n1>n2){
    cout<<"Largest number is "<<n1<<endl;
  }
  else if(n1<n2){
    cout<<"Largest number is "<<n2<<endl;
  }
}