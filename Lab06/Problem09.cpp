//Problem 9
#include <iostream>
using namespace std;
int main() {
  char input;
  bool flag = false;
  do{
    cout<<"Enter Y or N: "<<endl;
    cin>>input;
    if(input != 'Y' && input != 'N') {
      cout<<"Invalid Input"<<endl;
    }
    else {
      cout<<"Accepted"<<endl;
      flag = true;
    }
  }
  while(!flag);
  return 0;
}
