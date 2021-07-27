

#include <iostream>
#include <cmath>

using namespace std;


int main() {

    float discriminant,x1,x2,realpart,imgpart;


    int a,b,c;

    cout << "Enter the values of Coefficients"<< endl;

    cout << "a = " ;
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;


    discriminant = b*b - 4*a*c;

// cout << -b;

    if (discriminant > 0) {

        x1 = (-b + sqrt(discriminant))/(2*a) ;

        x2 = (-b - sqrt(discriminant))/(2*a) ;


        cout << endl << "Roots are real and different."<<endl<<endl;

        cout << "The Value of x1 is " << x1 << endl;

        cout << "The Value of x2 is " << x2 << endl;


    }
    
    else if (discriminant == 0) {
    
    x1 = (-b)/(2*a);
    
    cout << endl << "Roots are real and equal"<< endl;
    
    cout << "The Value of x1 & x2 is " << x1 << endl;
    
  
    }
    
    else {
    
    realpart = (-b)/(2*a);
    
    imgpart = sqrt(-discriminant)/(2*a);
    
    cout << endl << "Roots are Imaginary" << endl;
    
    cout << "The Value of x1 is " << realpart << "+" << imgpart << "i" << endl; 
    
    cout << "The Value of x2 is " << realpart << "-" << imgpart << "i" << endl; 
    
     
    }

    cout << endl
         << endl
         << "02"
         << " Abhijeet Nema";

    return 0;

}