#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Find the multiplication table of : ";
    cin >> x;

    for (int i = 1; i <= 10; i++)
    {
        cout << endl
             << x << " x " << i << " = " << x * i;
    }
    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema";
    return 0;
}
