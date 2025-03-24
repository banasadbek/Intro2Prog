//Problem 13
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int secret, guess;
    secret=rand()%100;
    do{
      cout<<"Guess: ";
      cin>>guess;
      if(guess==secret){
        cout<<"Correct!"<<endl;
      }
      else if(guess>secret){
        cout<<"Too big!"<<endl;
      }
      else if(guess<secret){
        cout<<"Too small!"<<endl;
      }
    }
    while(guess!=secret);
}
