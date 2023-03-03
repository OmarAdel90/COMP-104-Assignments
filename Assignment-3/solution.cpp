#include <iostream>
using namespace std;

int main(){

 // i, j, and k are ints
 int i, j, k;
 cout<<"i = ";
 cin>>i;
 cout<<"j = ";
 cin>>j;
 cout<<"k = ";
 cin>>k;

 if (i < j) {
   if (j < k)
     i = j;
   else
     j = k;
 }
 else {
   if (j > k)
     j = i;
   else
     i = k;
 }
 cout << "i = " << i << " j = " << j << " k = " << k << endl;
 
}