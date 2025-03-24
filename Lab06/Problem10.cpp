//Problem 10
#include <iostream>
using namespace std;
int main(){
  int command;
  cin>>command;
  do{
        if(command==1){
            cout<<"Processing..."<<endl;
            cin>>command;
        }
        else if(command==2){
            cout<<"Processing..."<<endl;
            cin>>command;
        }
        else {
          cout<<"Invalid Command"<<endl;
          cin>>command;
        }
  }
  while(command!=4);
  cout<<"Goodbye!"<<endl;

}