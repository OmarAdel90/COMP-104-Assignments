#include <iostream>
using namespace std;

int main(){
	enum tools {r, p, s};
	int x, y;
	tools p1, p2;
	cout << "Enter value for first player from the following 0.r 1.p 2.s" <<endl;
	cin >> x;
	cout << "Enter value for second player from the following 0.r 1.p 2.s" <<endl;
	cin >> y;
	p1 = (tools)x;
	p2 = (tools)y;
	//p1 wins
	if((p1 == r && p2 == s) || (p1 == s && p2 == p)){
		cout << "Player 1 wins" << endl;
	}
	else if (p1 == p && p2 == r){
		cout << "Player 1 wins" << endl;
	}
	else if (p1 == p2){
		cout << "Tie" << endl;
	}
	
	//p2 wins
	if(p2 == p && p1 == r){
		cout << "Player 2 wins" << endl;
	}
	else if ((p2 == r && p1 == s) || (p2 == s && p1 == p)){
		cout << "Player 2 wins" << endl;
	}

}