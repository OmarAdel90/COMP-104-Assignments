#include <iostream>
using namespace std;

int main(){
int input,result=0;

cout << "Input number: " << endl;
cin >> input;

if(input >= 100000 && input <= 999999){

	result = ((input)%10) + ((input/10)%10) + ((input/100)%10) + ((input/1000)%10) + ((input/10000)%10) + ((input/100000)%10);
	cout << result << endl;

	
}
else {
	cout << "Enter a valid number" << endl;
}
system("pause");
}