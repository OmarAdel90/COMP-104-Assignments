#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    int sum = 0;
    int rowSum = 0;
    int max = 0;
    int transpose[3][3];
    //input array values
    cout << "Input array values: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
            sum += arr[row][col];
            if(row == col){
                if(arr[0][0] < arr[row][col])max = arr[row][col];
            }
            transpose[col][row] = arr[row][col];
        }
    }
    cout << "The sum of array is: " << sum << endl;
    cout << "Largest number in diagonal is: " << max << endl; 
    //sum of elements in every row
    for (int row = 0; row < 3; row++)
    {
        rowSum = 0;
        for (int col = 0; col < 3; col++)
        {
            rowSum += arr[row][col];
        }
        cout << "sum of row " << row + 1 << " is " << rowSum << endl;
    }
    //print transpose
    cout << "Transpose of array: " << endl;
    for (int row = 0; row < 3; row++)
    {
        cout << endl;
        for (int col = 0; col < 3; col++)
        {
            cout << transpose[row][col];
        }
        cout << endl;
    } 


    int m[10][10];
    int circum = 0;
    for(int row = 0; row < 10; row++){
        cout << endl;
        for(int col = 0; col < 10; col++){
            m[row][col] = row + col;
            cout << m[row][col];
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++) {
        circum += arr[0][i];
        circum += arr[9][i];
    }

    
    for (int i = 1; i < 9; i++) {
        circum += arr[i][0];
        circum += arr[i][9];
    }
    cout << "Sum of elements in the circumference is: " << circum << endl;


    
}