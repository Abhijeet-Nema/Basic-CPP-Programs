
#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;

    cout << "Integer to be divided - ";

    cin >> a;

    cout << endl
         << endl
         << "Integer to divide by (Dividend) - ";

    cin >> b;

    c = a / b; //Quotient

    d = a % b; //Remainder

    cout << endl
         << endl
         << "Quotient when " << a << " is divided by " << b << " is - " << c;

    cout << endl
         << endl
         << "Remainder when " << a << " is divided by " << b << " is - " << d;

    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema ";

    return 0;
}
