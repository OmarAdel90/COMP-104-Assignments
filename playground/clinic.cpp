#include <iostream>
using namespace std;

int main(){
    int gender[5], hasCovid[5];
    cout << "Choose 1 for male or 0 for female folow that with 1 if you had covid or 0 if you didnt" << endl;
    for(int i = 0; i < 5; i++){
        cin >> gender[i] >> hasCovid[i];
        //cin >> hasCovid[i];
    }
    int sickFemales;
    for(int i = 0; i < 5; i++){
        if(gender[i] == 0 && hasCovid[i] == 1){
            sickFemales = sickFemales + 1;
        }
    }
    cout << "the number of females that have covid is: " << sickFemales << endl;
}