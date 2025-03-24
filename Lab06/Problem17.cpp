//Problem 17
#include <iostream>
using namespace std;
void factorial(int n){
  int result = 1;
  for (int i = 1; i <= n; i++){
    result *= i;
  }
  cout<<result<<endl;
}
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  factorial(n);
}