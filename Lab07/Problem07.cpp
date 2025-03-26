//Problem 7
#include <iostream>
using namespace std;

int validatedate(int day, int month, int year){
  if (month<1 || month>12 || day<1 || day>31){
    return false;
  }
  else if (year%4!=0 && month==2 && day>28){
    return false;
  }
  else if (year%4==0 && year%100!=0&& month==2 && day>29){
    return false;
  }
  else if((month==2 || month==4 || month==6 || month==9 || month==11)&& day>30){
    return false;
  }
  else{
    return true;}
}

string nextDate(int day, int month, int year){
  if (month==12 && day==31){
    month=1;
    day=1;
    year++;
  }
  else if (year%4!=0 && month==2 && day==28){
    month++;
    day=1;
  }
  else if (year%4==0 && month==2 && day==29){
    month++;
    day=1;
  }
  else if ((month==1 || month==3 ||month==5||month==7||month==8||month==10||month==12) && day==30){
    month++;
    day=1;
  }
  else if ((month==2||month==4||month==6||month==9||month==11) && day==31){
    month++;
    day=1;
  }
  else{
    day++;
  }
  string newdate = to_string(day)+"/"+to_string(month)+"/"+to_string(year);
  return newdate;
}

int main(){
  int day, month, year;

  do{
    cout<<"Enter the date separated by spaces: ";
    cin>>day>>month>>year;
    if (validatedate(day, month, year)){
      cout<<"Next Date: "<<nextDate(day, month, year)<<endl;
    }
    else{
      cout<<"Not a valid date";
      break;
    }
  }
  while(true);
  return 0;

}
