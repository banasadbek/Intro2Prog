//Problem 1
#include <iostream>
using namespace std;
int main() {
  float number;
  cout<<"Enter a number: ";
  cin>>number;
  if(number<0){
    cout<<"Negative number"<<endl;
  }
  else if(number>0){
    cout<<"Positive number"<<endl;
  }
  else{
      cout<<"Neutral number: ";
  }
}