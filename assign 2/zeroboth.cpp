//Matthew Graham
//1-28-2021
//CPSC-298-01

#include <iostream>
using namespace std;

//zeroBoth takes two parameters, the location of ints a and b and sets them both to zero at that location
//No return type
void zeroBoth(int &a, int &b){
  a = 0;
  b = 0;
}
int main(){
  int x;
  int y;
  //Calls for input from users with output prompts
  cout << "Enter an integer for X: " << endl;
  cin >> x;
  cout << "Enter an integer for Y: " << endl;
  cin >> y;
  // including an x and y previous to show functionality of zeroBoth
  int x_prev = x;
  int y_prev = y;
  zeroBoth(x, y);
  cout << "X and Y were: " << x_prev << " " << y_prev << endl;
  cout << "X and Y are now: " << x << " " << y << endl;

  return 0;
}
