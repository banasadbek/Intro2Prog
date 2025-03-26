//Problem 12

#include <iostream>
using namespace std;

int multiply(int a, int b){
  if(b==0){
    return 0;
  }
  if(b>0){
    return a+multiply(a,b-1);
  }
  else{
    -multiply(a,-b);
  }
}

int main(){
    int a, b;
    cout<<"Enter two numbers to multiply: ";
    cin>>a>>b;
    cout<<"The product is: "<<multiply(a,b);
    return 0;
}
