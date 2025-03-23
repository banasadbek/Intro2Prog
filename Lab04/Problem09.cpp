//Problem 4
#include <iostream>
using namespace std;
int main() {
  char value;
  cin>>value;
  switch (value) {
    case 'g':cout<<"Go!"<<endl;
    break;
    case 'y':cout<<"Get ready!"<<endl;
    break;
    case 'r':cout<<"Stop"<<endl;
    break;
    default:cout<<"Wrong value"<<endl;
    break;
  }
  return 0;
}