//Problem 12
#include <iostream>
using namespace std;
int main(){
  string password, input;
  cout<<"Set a password: ";
  cin>>password;
  do{
     cout<<"Enter your password: ";
     cin>>input;
     if(input==password){
       cout<<"Access Granted"<<endl;
     }
     else{
       cout<<"Incorrect"<<endl;
     }


  }while(input!=password);
}
