//Problem 18
#include <iostream>
using namespace std;
void printRectangle(int width, int height){
  for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
  int width, height;
  cout<<"Enter width and height: ";
  cin>>width>>height;
  printRectangle(width, height);
}
