//Problem 7
#include <iostream>
using namespace std;
int main(){
  float number, count=0, sum=0;
  while(sum<100){
    cin>>number;
    sum+=number;
    count++;
  }
  cout<<"Sum exceeded 100! Total sum: "<<sum<<endl;
  cout<<"Total numbers entered: "<<count<<endl;
  return 0;
}