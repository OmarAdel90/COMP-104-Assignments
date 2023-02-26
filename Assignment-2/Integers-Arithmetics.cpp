#include <iostream>
using namespace std;

int main(){
    int x, y , sum , difference , quotient , modulus , product;
    cin>>x>>y;
    sum = x + y, difference = x - y , quotient = x / y , product = x * y , modulus = x % y;
    cout<<"Sum = "<<sum<<endl<<"Difference = "<<difference<<endl<<"Quotient = "<<quotient<<endl<<"Modulus = "<<modulus<<endl<<"Product = "<<product<<endl;
    return 0;
}