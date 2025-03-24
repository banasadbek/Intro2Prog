//Problem 13
#include <iostream>
using namespace std;
int main() {
  int number;
  cin>>number;
  if (number<=0) {
    cout<<"The depth is 0"<<endl;
  }
  else{
    for(int i=1;i<=number;i++){
      for(int j=1;j<=i;j++){
        cout<<i;
      }
      cout<<endl;
    }
  }
}