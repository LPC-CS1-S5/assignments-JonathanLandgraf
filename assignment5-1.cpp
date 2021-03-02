#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
  int n, num = 0;
  int nthpower = 1;
  double invertpower = 0.0;

  cout << "Please enter in an integer (positive or negative):  \n";
  cin >> n;
  if (n < 0) {
    num = n * -1;
  }
  else if (n > 0) {
    num = n;
  }

  for (int i = 0; i < num; i++){
    nthpower = nthpower * 2;
  }

  if (n < 0) {
    invertpower = 1.0 / nthpower;
    cout << "The  power is : " << invertpower << endl;
  }
  else {
    cout << "The power is : " << nthpower << endl;
  }


  return 0;
}