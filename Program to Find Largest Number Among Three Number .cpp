
// Program to Find Largest Number Among Three Numbers

#include <iostream>

using namespace std;

int main() {

  int a,b,c;


  cout << "Enter Your First Number - " << endl ;


  cin >> a ;

cout << "Enter Your Second Number - " << endl ;


  cin >> b ;


cout << "Enter your Third Number - " << endl ;

  cin >> c;

if ( a >= b && a >= c ) {

  cout << endl << a << " is the greatest among the three.";

}

else if ( b >= a && b >= c ) {

cout << endl << b << " is the greatest among the three.";




}

else if ( c >= a && c >= b ) {

cout << endl << c << " is the greatest among the three.";

}

cout << endl
     << endl
     << "02"
     << " Abhijeet Nema";

return 0;


}