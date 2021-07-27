#include <iostream>

using namespace std;
int main() {

    int num1,num2;
    cout << "Enter Fist Point " << endl ;
    cin >> num1;
    
    cout << "Enter Second Point " << endl ;
    cin >> num2;
    
    if (num1>num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;  
    }  

    if(num1 == 0){ num1 = num1+1 ; }
    if(num1 == 1){ num1 = num1+1 ; }
    
    cout << "Total Prime Numbers between the given interval are - " << endl;

    bool result;

    for(int z=num1; z<=num2; z++) {

        for(int i=2; i<z; i++) {
            if (z%i == 0) {
                result = true;
                break;
            }

            else {
                result = false;
            }
        }

        if(!result) {
            cout << endl << z ;
        }
  }
    cout << endl << endl << "02 " << "Abhijeet Nema";
    return 0;
}