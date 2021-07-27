// Program to Calculate Sum of Natural Numbers
#include <iostream>

using namespace std;

int main()
{
    int n,temp;
   
    cout << "Enter the last term upto which you need the sum of Natural Numbers : " << endl;

    cin >> n;
    temp = n;
    for (int i = n - 1; i >= 1; i--)
    {
        n = n + i;
    } //for loop end

    cout << endl << "The sum of natural numbers upto " << temp << " is " << n;

    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema";

    return 0;

} //main end