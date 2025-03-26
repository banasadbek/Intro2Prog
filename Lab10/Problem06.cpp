//Problem 6
#include <iostream>
using namespace std;

int main(){
  char value;
  int frequency[26] = {0};
  char alphabet[26] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};
  do{
    cin>>value;
    if(value>='a' && value<='z'){
      frequency[(int)value-97] += 1;
    }
  }
  while(value!='0');
  for(int i=0; i<26; i++) {
    if(frequency[i]>0) {
      cout<<alphabet[i]<<" : "<<frequency[i]<<endl;
    }
  }
}
