//Problem 16
#include <iostream>
using namespace std;
int main() {
  float credit_hour, total_hour=0;
  float grade, total_grade=0;
  for(int i=1; i<=5; i++){
   cout<<"Enter the grade: ";
   cin>>grade;
   cout<<"Enter the credit hour: ";
   cin>>credit_hour;
   total_hour+=credit_hour;
   total_grade+=grade*credit_hour;
  }
  cout<<"The avergae GPA: "<<float(total_grade)/total_hour;
}