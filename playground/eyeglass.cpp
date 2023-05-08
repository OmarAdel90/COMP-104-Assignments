#include <iostream>
using namespace std;

int main(){
    float eyeVal[8];
    int nearsight , farsight, d;
    cout << "enter eye periscription value: " << endl;
    for(int i = 0; i < 8; i++){
        cin >> eyeVal[i];
        if(eyeVal[i] > 4 || eyeVal[i] < -0.25){
            cout << "enter values between -4.0 and -0.25 or 0.25 and 4.0" << endl;
            return 0;
        }
    }
    
    for(int i = 0; i < 8 ;i++){
        if((eyeVal[i] >= -4.0 && eyeVal[i] <= -0.25) || (eyeVal[i] >= 0.25 && eyeVal[i] <= 4.0)){
            if(eyeVal[i] > 0){
                farsight= farsight + 1;
            }
            if(eyeVal[i] < 0){
                nearsight= nearsight + 1;
            }
        }else{
            cout << "enter values between -4.0 and -0.25 or 0.25 and 4.0" << endl;
            
        }
    }

    if(nearsight != farsight){
        d = abs(nearsight - farsight);
        cout << "there are " << d << " more nearsighted users that farsighted users" << endl;
    }else{
        cout << "we are good to go!" << endl;
    }

    
    
}