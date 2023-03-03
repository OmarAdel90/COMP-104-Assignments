#include <iostream>
using namespace std;

int main(){
    int selector;
    cout<<"Which sandwich you would like to have: "<<endl<< "1- Spicy Crispy Chicken Sandwich"<<endl<<"2- Big Mac"<<endl<<"3- Chicken McNuggets \v"<<endl;
    cout<<"Please enter your choice: ";
    cin>>selector;
    if(selector == 1){
        cout<<"The price for Spicy Crispy Chicken Sandwich is 100 L.E"<<endl;
    }
    else if(selector ==  2){
        cout<<"The price for Big Mac is 120 L.E"<<endl;
    }
    else if(selector == 3){
        cout<<"The price for Chicken McNuggets is 80 L.E"<<endl;
    }
    else{
        cout<<"Invalid option"<<endl;
    }


}