//Problem 4
#include <iostream>
using namespace std;
int main() {
    int speed;
    cout<<"Enter your speed:"<<endl;
    cin>>speed;
    if(speed>80){
      cout<<"too fast"<<endl;
    }
    else if(speed<20){
      cout<<"too slow"<<endl;
    }
    else{
      cout<<"just right"<<endl;
    }
}