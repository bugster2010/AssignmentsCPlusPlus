//Matthew Graham
//1-28-2021
//CPSC-298-01

#include <iostream>
using namespace std;

int main(){
  int numberArray[10];
  int temp;
  //Calls for integers letting user know how many they have entered and how many are left
  for(int i = 0; i < 10; ++i){
    cout << "Enter non negative integer (" << i+1 << " out of 10): " << endl;
    cin >> temp;
    while(temp < 0){
      cout << "Enter NON negative integer PLEASE" << endl;
      cin >> temp;
    }
    numberArray[i] = temp;
  }
  //Included for formatting
  cout << endl;

  //prints out given array in order
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << endl;
  }

  return 0;
}
