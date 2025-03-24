//Problem 16
#include <iostream>
using namespace std;

void maxNumber(int a, int b){
  if(a>b){
    cout<<a<<" is greater than "<<b<<endl;
  }
  else if(a<b){
    cout<<b<<" is greater than "<<a<<endl;
  }
  else{
    cout<<a<<" is equal to "<<b<<endl;
  }
}

int main(){
  int a, b;
  cout<<"Enter the two numbers: ";
  cin>>a>>b;
  maxNumber(a,b);
}