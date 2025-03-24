//Problem 15
#include <iostream>
using namespace std;

void greetUser(){
  string name;
  cout<<"Please enter your name: ";
  cin>>name;
  cout<<"Hello, "<<name<<endl;
}

int main(){
  greetUser();
}