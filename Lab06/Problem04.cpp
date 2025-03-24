//Problem 4
#include <iostream>
using namespace std;
int main(){
  int number, count=1;
  cout<<"Enter a number: ";
  cin>>number;
  while(number/10!=0){
    number=number/10;
    count++;
  }
  cout<<count<<endl;
  return 0;
}