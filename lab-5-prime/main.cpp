#include <iostream>
using namespace std;

int main() {
       int run = 0;
    do
    {
        int firstNum, secondNum;
        int total = 0;
        bool flag = true;
        cout << "Enter 1st number" << endl;
        cin >> firstNum;
        cout << "Enter 2nd number" << endl;
        cin >> secondNum;

    for (int i = firstNum; i <= secondNum; i++) {
        flag = true;
        if (i == 1 || i == 2 || i <= 0)
            flag = false;
        else
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0) {
                    flag = false;
                    break;
                }

            }
        }
        if (flag)
            total += 1;
    }
    cout << "number of primes is " << total << endl;
    cout << "to stop running press 1 to continue press 0" << endl;
    cin >> run;
    } while (run == 0);
}