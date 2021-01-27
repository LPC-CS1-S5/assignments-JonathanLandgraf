#include <iostream>
using namespace std;

//28, 32, 37, 24, and 33
int main()
{
  //initialize all varaibles
  int num1 = 28, num2 = 32, num3 = 37, num4 =24, num5 = 33;
  float sum = num1 + num2 + num3 + num4 + num5;
  float average = 0.000;
  average = sum / 5;

  //display 
  cout << "The sum of 28, 32, 37, 24, and 33 is: " << sum << endl;
  cout << "The average of the sum is: " << average << endl;


  return 0;

}