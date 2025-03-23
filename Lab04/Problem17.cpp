//Problem 17
#include <iostream>
using namespace std;
int main(){
  float gpa;
  cout<<"Enter GPA:"<<endl;
  cin>>gpa;
  if(gpa>=4.0&&gpa<=5.0){
    cout<<"You got 80% scholorship"<<endl;
  }
  else if(gpa>=3.5&&gpa<=4.0){
    cout<<"You got 60% scholorship"<<endl;
  }
  else if(gpa>=3.0&&gpa<=3.5){
    cout<<"You got 50% scholorship"<<endl;
  }
  else{
    cout<<"You got no scholorship"<<endl;
  }
  return 0;
}