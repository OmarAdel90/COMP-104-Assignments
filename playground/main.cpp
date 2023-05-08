#include <iostream>
using namespace std;
    int gcdFind(int x , int y){
        int gcd = 0;
        int maxGcd = 0;
        int i = 1;
        for(; i < x && y; i++){
            if(x % i == 0 && y % i == 0)gcd = i;
            if(maxGcd < gcd)maxGcd = gcd ;
        }
        return maxGcd;
    }

    bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main(){
    int x[100] , y[100] , z[100] , n;
    int largestGCD = 0;
    cout << "enter size of arrays x and y: " << endl;
    cin >> n;
    cout << " enter values for array x" << endl;
    //input x values
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    cout << " enter values for array y" << endl;
    //input y values
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }
    // finds Z
    for(int i = 0; i < n; i++){
        z[i] = gcdFind(x[i], y[i]);
        if(z[i] > largestGCD)largestGCD = z[i];

    }

    cout << "array z :" << endl;
    for(int i = 0; i < n; i++){
        cout << z[i] << endl;
    }

    

    cout << "number of primes: " <<  countPrimes(z,n) << endl;
    cout << "the biggest gcd in the array z: " << largestGCD << endl;

}