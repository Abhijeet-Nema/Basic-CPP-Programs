#include <iostream>
using namespace std;

int main() {

    int n1,n2;

    cout << "Enter your First number " << endl ;
    cin >> n1;
    cout << "Enter your Second number " << endl ;
    cin >> n2;
    int x1 = n1;
    int x2 = n2;
    

    if(n2>n1) {
        int temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

//cout << n1 << n2;

int GCD;

    for(int i=1; i<=n2; i++) {


        if (n1%i==0 && n2%i==0) {

             GCD = i;

        }




    }
    
    

  cout << endl << "The GCD of " << x1 << " & " << x2 << " is " << GCD;


 cout << endl << endl << "02 " << "Abhijeet Nema";


    return 0;

}