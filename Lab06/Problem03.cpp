//Problem 2
#include <iostream>
using namespace std;
void collatz(int number){
    bool flag=false;
    cout<<number<<" ";
    while(flag==false){
      if(number%2==0){
        number=number/2;
        cout<<number<<" ";
      }
      else{
        number=number*3+1;
        cout<<number<<" ";
      }
      if(number==1){
        flag=true;
      }
    }
}

int main() {
    int number, count=0;
    cout<<"Enter a number: ";
    cin>>number;
    collatz(number);
  return 0;
}
