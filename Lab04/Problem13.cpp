//Problem 13
#include <iostream>
using namespace std;
int main(){
  char value;
  cout<<"Enter a character: ";
  cin>>value;
  if (value>='a'&&value<='z'){
    cout<<"Lowercase alphabet";
  }
  else if (value>='A'&&value<='Z'){
    cout<<"Uppercase alphabet";
  }
  else{
    cout<<"It is not an alphabet";
  }
  return 0;
}