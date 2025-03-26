//Problem 2
#include <iostream>
using namespace std;
int calculateFee(int hours){
  if(hours<=2){
    return 0;
  }
  else if(hours<=5){
    return(hours-2)*2;
  }
  else{
    return 3*2+(hours-5)*5;
  }

}

int main(){
  int hours;
  char choice;
  while(true){
    cout<<"Enter number of hours parked: ";
    cin>>hours;
    if (hours<0){
      cout<<"Invalid Input"<<endl;
    }
    else{
      int fee = calculateFee(hours);
      cout<<"Parking fee: $"<<fee<<endl;

    }
    cout<<"Do you want to continue?(y/n):";
    cin>>choice;
    if(choice=='n'||choice=='N'){
      break;
    }

  }
}
