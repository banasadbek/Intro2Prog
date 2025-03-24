//Problem 7
#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;
  for(int r=1;r<=n;r++){
    for(int c=1;c<=n;c++){
      cout<<"*";
    }
    cout<<endl;
  }
}