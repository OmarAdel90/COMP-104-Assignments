#include <iostream>
using namespace std;

int main(){
    int firstNum , secondNum;
    int total = 0;
    int flag = 0;
    
        cout << "Enter 1st number" << endl;
        cin >> firstNum;
        cout << "Enter 2nd number" << endl;
        cin >> secondNum;
        for(int i = firstNum; i <= secondNum; i++){
            for (int j = 2; j * j <= i; j++)
            {
                if(i % j == 0){
                    break;
                }
                else{
                    total += 1;
                    break;
                }
            }
        }
    
    cout << "number of primes is " << total << endl;
    
}