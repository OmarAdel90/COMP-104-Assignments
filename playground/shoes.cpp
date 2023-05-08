#include <iostream>
using namespace std;

int main(){
    int shoeSizes[10], adults, kids, d;
    cout << "enter shoe sizes: " << endl;
    for (int i = 0; i < 10; i++){
        cin >> shoeSizes[i];
        if(shoeSizes[i] < 0){
            cout <<"Enter a valid size" << endl;
            return 0;
        }
    }

    for (int i = 0; i < 10; i++){
        if (shoeSizes[i] >= 13){
            adults = adults + 1;
        }else if(shoeSizes[i] < 13){
            kids = kids + 1;
        }
        
    }

    if (adults > kids){
        d = adults - kids;
        cout << "We need to buy " << d << " more kids shoes" << endl;
    }else{
        cout << "we are good to go" << endl;
    }
}