#include <iostream>
using namespace std;
    float growthPrice(float x){
        float newPrice;
        if(x >= 15){
            newPrice = x - (x * (4.0 / 100));
        }
        else if(x < 15){
            newPrice = x - (x * (2.5 / 100));
        }
        return newPrice;
    }
int main(){
    float prices[100], newPrices[100] , lowestPrice, carPrices[100];
    int n;
    cout << "Enter number of prices " << endl;
    cin >> n;
    cout << "enter prices: " << endl;
    for(int i = 0; i < n; i++){
        cin >> prices[i];
        newPrices[i] = growthPrice(prices[i]);
        lowestPrice = newPrices[0];
        if(newPrices[i] > lowestPrice)lowestPrice = newPrices[i];
        carPrices[i] = (300000 / newPrices[i]);
        carPrices[i] = carPrices[i] + (carPrices[i] * 10.0 /100);  
    }
    cout << "Prices after growth: " << endl;
    
    for(int i = 0; i < n; i++){
        cout << newPrices[i] << endl;
    }
    cout << "lowest price: " << lowestPrice << endl;
    cout << "Car prices to each currency + tax: " << endl;
    for(int i = 0; i < n; i++){
        cout << carPrices[i] << endl;
    } 







}