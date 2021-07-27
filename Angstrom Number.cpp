#include <iostream>
#include <cmath>
#include <string>

  using namespace std;

int main(){

  int Num;
  string StrNum;
  cout << "Enter a number to check whether it's an Angstrom number or not " << endl;
  cin >> Num;
  StrNum = to_string(Num);

  //cout << StrNum.length();

  int rem;
  int sum = 0;
  while (Num > 0) {
    rem = Num % 10;
    sum = sum + pow(rem, StrNum.length());
    Num = (Num - rem) / 10;
  }

  if (stoi(StrNum) == sum) {
    cout << endl << stoi(StrNum) << " is an Angstrom number";
    ;
  }

  else {
    cout << endl << stoi(StrNum) << " is not an Angstrom number";
  }
  
  cout << endl << endl << "02 " << "Abhijeet Nema";
  return 0;
}