//Matthew Graham
//1-28-2021
//CPSC-298-01

#include <iostream>
using namespace std;

double getImperial(){
  int totInches;
  int totFeet;
  cout << "Enter feet: " << endl;
  cin >> totFeet;
  cout << "Enter inches: " << endl;
  cin >> totInches;
  double retFeet = totInches/12.0 +  totFeet;

  return retFeet;
}

//There are 3.281 ft in a meter
double feetToM(double feet){
  double meter = feet / 3.281;
  return meter;
}

//takes a meter value of doubles and prints out whole meters and remaining centimeters.
void outputMetersAndCM(double meter){
  int wholeMeter = 0;
  //This while loop gradually separates the whole meters from the remaining centimeters
  while(meter > 1.0){
    meter = meter - 1;
    ++wholeMeter;
  }
  //There are 100 cm in a meter, the remaining meters is less than 1 due to while loop, so it is multiplied by 100 to
  cout << wholeMeter << "M and " << meter*100 << "CM" << endl;

}

int main(){
  string userInput = "";
  while(userInput != "exit"){
    outputMetersAndCM(feetToM(getImperial()));
    cout << "Type exit to quit, otherwise, type anything to continue" << endl;
    cin >> userInput;
  }

  return 0;
}
