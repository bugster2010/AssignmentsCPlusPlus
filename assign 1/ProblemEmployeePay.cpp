#include <iostream>
using namespace std;

int main(){
  const double payRate = 16.00;
  const int regularTime = 40;
  const double overPay = 1.5*16.00;
  const double ssTax = .06;
  const double fedTax = .14;
  const double stTax = .05;
  const int medIns = 10;

  int hoursWorked;
  int overTime = 0;

  cout << "Enter hours worked: ";
  cin >> hoursWorked;
  if(hoursWorked > 40){
    overTime = hoursWorked - 40;
    hoursWorked = 40;
  }
  int grossPay = hoursWorked * payRate + overTime * overPay;
  cout << "Worker Gross Pay: " << grossPay << endl;
  cout << "Deductions: " << endl;
  cout << "Social Security Tax: -" << grossPay * ssTax << endl;
  cout << "Federal Tax:         -" << grossPay * fedTax << endl;
  cout << "State Tax:           -" << grossPay * stTax << endl;
  cout << "Medical Insurance:   -10.00" <<endl;
  cout << "Net pay:             +"<< grossPay * .75 - 10 << endl;
}
