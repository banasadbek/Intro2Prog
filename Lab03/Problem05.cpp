//Problem 6
#include <iostream>
using namespace std;

int main() {
  int age, sum=0;
  for (int i = 1; i <= 4; i++) {
    cout << "Enter the age: ";
    cin >> age;
    sum += age;
  }
  cout<<"Avg age: "<<float(sum)/4<<endl;
}