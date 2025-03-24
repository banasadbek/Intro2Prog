//Problem 4
#include <iostream>
using namespace std;

int main(){
  int n, factorial;
  factorial=1;
  cout<<"Enter a positive integer number: ";
  cin>>n;
  for(int i=1;i<=n;i++){
    factorial=factorial*i;
  }
  cout<<factorial<<endl;
  return 0;
}