#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    a = 0;
    b = 1;

    cout << a << " ";

    cout << b << " ";

    for (int i = 0; i < 20; i++)
    {

        c = a + b;
        cout << c << " ";

        a = b;
        b = c;
    }
    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema";
    return 0;
}
