#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num1, num2, num3, num4, num5;
  srand(time(0));  

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;
  num4 = rand() % 100;
  num5 = rand() % 100;

  cout << "The random numbers generated are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5 << endl;






  return 0;
}