#include <iostream>
using namespace std;

int main(){
  int roomCap;
  int numPeople;

  cout << "Enter maximum room Capacity: " << endl;
  cin >> roomCap;
  cout << "Enter number of people in attendance: " << endl;
  cin >> numPeople;
  if(numPeople <= roomCap){
    cout << "Legal Gathering" << endl;
  }else{
    cout << "Illegal Gathering. Please omit " << numPeople - roomCap << " person(s)" << endl;
  }

}
