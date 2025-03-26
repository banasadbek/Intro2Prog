//Problem 6
#include <iostream>
using namespace std;

int checkPassword(string password) {
  bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;
  int length = password.length();
  string specialChars = "!@#$%^&*()-_+=<>?/";

  if(length<8) {
    cout<<"Use at least 8 characters!";
  }
  else{
    if(password.length()>=8){
      for(int i=0;i<length;i++){
        char ch=password[i];
        if(ch>='a'&&ch<='z'){
          hasLower=true;
        }
        else if(ch>='A'&&ch<='Z'){
          hasUpper=true;
        }
        else if(ch>='0'&&ch<='9'){
          hasDigit=true;
        }
        else {
          for (int j=0; j<specialChars.length(); j++){
            if(specialChars[j]==ch){
              hasSpecial=true;
              break;
            }
          }
        }
      }
      if(hasLower&&hasUpper&&hasDigit&&hasSpecial){
        cout<<"Strong Password"<<endl;
      }
      else{
        cout<<"Weak password. Missing: ";
        cout<<"Use at least 8 characters"<<endl;
        if (!hasUpper){cout<<"Use at least one upper letter"<<endl;}
        if (!hasLower){cout<<"Use at least one lower letter"<<endl;}
        if (!hasDigit){cout<<"Use at least one digit"<<endl;}
        if (!hasSpecial){cout<<"Use at least one special character"<<endl;}

    }
    }

  }
}

int main(){
  string password;
  cout<<"Enter your password: ";
  cin>>password;
  checkPassword(password);
  return 0;

}