#include <iostream>
using namespace std;

int main() {
int n,cons;
cout<< "Enter a number - ";
cin >> n;
cons = n;

//cout << n;

int sum = 0;

while (n>0) {
 
int rem = n%10;
 
sum = sum*10 + rem;

n = (n-rem)/10;

}


cout << endl <<"The reverse of " << cons << " is " << sum;

cout << endl << endl << "02 " << "Abhijeet Nema";

    return 0;
}