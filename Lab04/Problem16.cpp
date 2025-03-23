//Problem 16
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  float x, y, distance;
  cout<<"Enter the x and y coordinates: "<<endl;
  cin>>x>>y;
  distance = sqrt((x*x+y*y));
  if(distance > 10){
    cout<<"The point ("<<x<<','<<y<<") is not in circle"<<endl;
  }
  else{
    cout<<"The point ("<<x<<','<<y<<") is in circle"<<endl;
  }
}