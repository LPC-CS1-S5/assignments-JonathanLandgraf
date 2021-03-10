#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num1, num2, num3, num4, num5, min;
  srand(time(0));  

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;
  num4 = rand() % 100;
  num5 = rand() % 100;

  cout << "The random numbers generated are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5 << endl;

  if (num1 >= num2){
    min = num2;
  }
  else {
    min = num1;
  }
  if (min > num3){
    min = num3;
  }
  if (min > num4){
  min = num4;
  }
  if (min > num5){
  min = num5;
  }
  
  cout << "The minimum number is: " << min <<endl;


  return 0;
}