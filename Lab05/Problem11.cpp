//Problem 11
#include <iostream>
using namespace std;
int main() {
  int number, positives=0, negatives=0, total = 0, count=0;
  bool iszero = true;
  while (iszero){
    cin>>number;
    if (number ==0){
      iszero = false;
    }
    else if(number>0){
      positives += 1;
      total+=number;
      count+=1;
    }
    else {
      total+=number;
      negatives+=1;
      count+=1;
    }
  }
  cout <<"The number of positives is "<<positives<< endl;
  cout <<"The number of negatives is "<<negatives<< endl;
  cout <<"The total is "<<total<< endl;
  cout <<"The average is "<<float(total)/count<< endl;
}
