#include <iostream>
using namespace std;

int main()
{
  //initialize all varaibles
  int regularHours = 40;
  int overtimeHours = 10;
  float regularWages = 0.00;
  float overtimeWages = 0.00;
  float totalWages = 0.00;

  //do math for final wages
  regularWages = regularHours * 18.25;
  overtimeWages = overtimeHours * 27.78;
  totalWages = regularWages + overtimeWages;

  //display wages
  cout << "The worker has worked " << regularHours + overtimeHours << " hours and has earned $" << totalWages;

  return 0;

}