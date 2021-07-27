#include <iostream>

using namespace std;

int main() {

    int n1,n2,x1,x2;

    cout << "Enter your first number -" << endl ;
    cin >> n1;
    x1 = n1;

    cout << "Enter your Second number -" << endl ;
    cin >> n2;
    x2 = n2;

    if(n2>n1) {
        int temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
    }



    int LCM;

    if(n2 == 0) {

        cout << endl << "LCM can't be calculated...";
        
    }

    else {

        for(int i=n2; i<= n1*n2 ; i++) {



            if( i%n2==0 && i%n1==0) {

                LCM = i;
                break;
            }


        }



        cout << endl << "The LCM of " << x1 << " & " << x2 << " is " << LCM;

    }

 cout << endl << endl << "02 " << "Abhijeet Nema";




    return 0;
}