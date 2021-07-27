#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Find the Factorial of - ";

    cin >> n;

    int x = n;

    int i = n - 1;

    while (i > 0)
    {
        n = n * i;
        i--;
    }

    cout << endl
         << "The factorial of " << x << " is " << n;

    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema";

    return 0;
}
