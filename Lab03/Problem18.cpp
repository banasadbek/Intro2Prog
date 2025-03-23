//Problem 18
#include <iostream>
using namespace std;
int main() {
  float fee, scholorship;
  cout<<"Enter the original tuition fee: ";
  cin>>fee;
  cout<<"Enter the scholorship rate: ";
  cin>>scholorship;
  cout<<"The scholorship amount: "<<fee*scholorship/100<<endl;
  cout<<"The final tuition fee: "<<fee*(100-scholorship)/100<<endl;
}