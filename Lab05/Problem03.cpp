//Problem 3
#include <iostream>
using namespace std;
int main(){
  int count = 0;
  for(char i = 'A';i<='Z';i++){
    cout<<i<<" ";
    count++;
    if(count%5==0){
      cout<<endl;
      }
  }
return 0;
}