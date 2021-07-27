#include <iostream>

using namespace std;

int main()
{

  int a, b, c;

  cout << "Enter two values - " << endl  << endl;

  cin >> a >> b;

  cout << "BEFORE SWAPPING : \n";

  cout << "a is " << a << endl;

  cout << "b is " << b << endl << endl;

  cout << "AFTER SWAPPING : \n";

  c = a;

  a = b;
  b = c;

  cout << "a is " << a << endl;

  cout << "b is " << b << endl;

  cout << "SWAPPING DONE.";

  cout << endl << endl  << "02" << " Abhijeet Nema";

  return 0;
}