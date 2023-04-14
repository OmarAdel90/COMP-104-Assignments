#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int total;
    //finds sum of array and their average
    for (int i = 0; i < 10; i++)
    {
        total = total + arr[i];
    }
    float avg = (float)total / 10;
    cout << "Sum of array is " << total << endl << "Average is " << avg << endl;

    //position of nums divisible by 3
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 3 == 0)cout << i << endl;
    }
    

    //finds average of even nums
    float avgEvenNum , totalEvenNums;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            totalEvenNums = totalEvenNums + arr[i];
        }
        
    }
    avgEvenNum = totalEvenNums / 5;
    cout << "The average of Even numbers is " << avgEvenNum << endl;

    //finds the product of odd nums
    int oddProduct = 1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddProduct *= arr[i];
        }
        
    }
    cout << "Product of odd numbers is " << oddProduct << endl;

    //finds difference between smallest and largest nums in array
    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    int min = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "The difference between the largest and smallest numbers is " << max - min << endl;
}