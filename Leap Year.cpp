//Program to Check Leap Year

#include <iostream>

using namespace std;

int main()
{

    int year;

    cout << "Enter a year to check whether it is a leap year or not" << endl
         << endl;

    cin >> year;

    //cout << year;

    if (year % 4 == 0)
    {

        if (year % 100 == 0)
        {

            if (year % 400 != 0)
            {

                cout << year << " is not a leap year.";

            } // Third if closed

            else
            {
                cout << year << " is a leap year.";

            } //Third else closed

        } //Second if closed

        else
        {

            cout << year << " is a leap year.";

        } // Second else closed

    } //First if closed

    else
    {

        cout << year << " is not a leap year.";

    } // First else closed

    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema";

    return 0;

} //main