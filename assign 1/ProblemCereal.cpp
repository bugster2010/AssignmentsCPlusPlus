//Matthew Graham
//1-28-2021
//CPSC-298-01

#include <iostream>
using namespace std;

int main(){
  double boxOunces;
  const double tonOunces = 35273.92;
  cout << "Enter box ounces: ";
  cin >> boxOunces;
  cout << "Weight in Metric Tons: " << boxOunces/35273.92 << endl;
  cout << "Boxes needed: " << 35273.92/boxOunces << endl;

  return 0;
}
