#include <iostream>


using namespace std;


int main() {

 char a;

 cout << "Enter A Single Character : " ;

 cin >> a; 


 if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ) {

cout << a << " comes under vowel.";


}

else {

cout << a << " comes under consonants.";

}

cout << endl
     << endl
     << "02"
     << " Abhijeet Nema";

return 0;

}