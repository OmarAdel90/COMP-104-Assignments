#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter array size: " << endl;
    cin >> n;
    int  A[n] , B[n] , C[n] , D[n] , E[n];
    cout << "Enter values for Array A: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter values for Array B: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    //difference
    cout << "Array C (difference) is: " << endl;
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] - B[i];
        cout << C[i] << endl;
    }
    
    //square difference
    cout << "Squared difference is: " << endl;
    for (int i = 0; i < n; i++)
    {
        A[i] = pow(A[i],2.0);
        B[i] = pow(B[i],2.0);
        D[i] = A[i] - B[i];
        cout << D[i] << endl;
    }

    //array E
    cout << "Array E is: " << endl;
    for (int i = 0; i < n; i++)
    {
        E[i] = (A[i] + B[i]) - (sqrt(A[i]) - sqrt(B[i]));
        cout << E[i] << endl;
    }
    
    
    
}