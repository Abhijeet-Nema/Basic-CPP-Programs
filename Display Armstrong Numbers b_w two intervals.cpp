#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int Num1,Num2;
    cout << "Enter The First point of the interval - " << endl ;
    cin >> Num1;
    cout << "Enter The Second point of the interval - " << endl ;
    cin >> Num2;

    if(Num1>Num2) {
        int dele;
        dele = Num1;
        Num1 = Num2;
        Num2 = dele;
        dele = NULL;
    }

    cout << endl << "Total Angstrom Numbers between " << Num1 << " & " << Num2 << " are - ";
    for(int i = Num1; i<= Num2 ; i++) {
        string StrNum;
        StrNum = to_string(i);

        //cout << StrNum.length();

        int rem;
        int sum = 0;
        int temp = i;
        while( temp > 0) {

            rem = temp%10;
            sum = sum + pow(rem,StrNum.length());
            temp = (temp-rem)/10;
        }
        if(sum == stoi(StrNum)) {
            cout << endl << sum;
        }
    }
    cout << endl << endl << "02 " << "Abhijeet Nema";

    return 0;
}