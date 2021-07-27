#include <iostream>

using namespace std;
int main() {

    int num;
    cout << "Enter a number to check whether it's prime or not " << endl ;
    cin >> num;

//cout << num;
    bool result;

    for(int i=2; i<num; i++) {
        if (num%i == 0) {

            result = true;
            break;

        }

        else {
            result = false;
        }
    }

    if(result) {
        cout << num << " is not a Prime Number.";
    }

    else {
        cout << num << " is a Prime Number.";

    }

    cout << endl << endl << "02 " << "Abhijeet Nema";

    return 0;

}