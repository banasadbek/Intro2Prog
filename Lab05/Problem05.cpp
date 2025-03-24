//Problem 5
#include <iostream>
using namespace std;
int main(){
  double number_of_classes, credits, grade, sum=0, total_credits=0;
  cout<<"Enter the number of classes: ";
  cin>>number_of_classes;
  for(int i=1; i<=number_of_classes; i++){
    cout<<"Enter credits and grade for class "<<i<<endl;
    cin>>credits>>grade;
    sum+=credits*grade;
    total_credits+=credits;
  }
  cout<<"Your total GPA is : "<<sum/total_credits<<endl;
  return 0;
}