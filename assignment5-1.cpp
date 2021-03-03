#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
  int n, num, n2 = 0;     //num is not used for the assignment, but was used when doing and showing lab 5-7 work
  int nthpower = 1;

  double invertpower = 0.0; //Used only for the lab 5-7 work

  bool inputCheck = false;


  while (inputCheck == false){
  cout << "Please enter 2 integers (between 0 and 1300):  \n";
  cin >> n >> n2;
  if (n >= 0  && n2 < 1300){
    inputCheck = true;
    }
  }


  /*
  Code block for lab 5-7 when there was a negative number
  if (n < 0) {
    num = n * -1;
  }
  else if (n > 0) {
    num = n;
  }
  */

  while (n < nthpower && nthpower < n2){
    nthpower = nthpower * 2;
  }

  /*
  Code block part of lab 5-7 for when using a negative exponent
  if (n < 0) {
    invertpower = 1.0 / nthpower;
    cout << "The  power is : " << invertpower << endl;
  }
  else {
    cout << "The power is : " << nthpower << endl;
  }
  */
  cout << "The input numbers are " << n << " and " << n2 << endl;
  cout << "The power is : " << nthpower << endl;

  return 0;
}