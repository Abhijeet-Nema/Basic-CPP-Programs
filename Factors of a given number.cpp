#include <iostream>
using namespace std;
int main() {
    cout << "Find the factors of : ";
    int number;
    cin >> number;
    cout << endl << "The factors of " << number << " are - ";
    for(int i = 1; i <= number ; i++) {
        if(number%i == 0) {
            cout << endl  << i;
        }
    }
    cout << endl << endl << "02 " << "Abhijeet Nema";
    return 0;
}