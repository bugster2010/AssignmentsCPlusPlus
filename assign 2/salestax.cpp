//Matthew Graham
//1-28-2021
//CPSC-298-01

#include <iostream>
using namespace std;

//Add tax takes in taxrate represented as a decimal percentage (100 is 1.00) and cost and returns the cost after tax
float addTax(float taxRate, float cost){
  return (taxRate + 1.00) * cost;
}

//Main function simply tests addTax with two examples
int main() {
  cout << "$10.50 purchase at 12% tax is: " << addTax(.12, 12.50) << endl;
  cout << "$20.00 purchase at 9% tax is: " << addTax(.09, 20.00) << endl;

  return 0;

}
