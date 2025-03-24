//Problem 11
#include <iostream>
using namespace std;
int main(){
    int command, n1, n2;
    cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit";
    cin>>command;
    do{
        if(command==1){
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"Result: "<<n1+n2<<endl;
            cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit";
            cin>>command;
        }
        else if(command==2){
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"Result: "<<n1-n2<<endl;
            cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit";
            cin>>command;
        }
        else if(command==3){
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"Result: "<<n1*n2<<endl;
            cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit";
            cin>>command;
        }
        else if(command==4){
            cout<<"Enter two numbers: ";
            cin>>n1>>n2;
            cout<<"Result: "<<n1/n2<<endl;
            cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit";
            cin>>command;
        }
        else if(command==5){
            cout<<"Goodbye!"<<endl;
        }
        else{
          cout<<"Wrong input!"<<endl;
          cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5. Exit";
          cin>>command;
        }
    }
    while(command!=5);
    cout<<"Goodbye!"<<endl;

}