//Problem 5
#include <iostream>
using namespace std;
int main(){
  int number;
  cout<<"Enter a number:"<<endl;
  cin>>number;
  cout<<number%10<<" ";
  while(number/10!=0){
    number/=10;
    cout<<number%10<<" ";

  }
  return 0;
}
