#include <iostream>
using namespace std;

int main()
{
  //initialize all varaibles
  float meal_cost = 88.67;
  float tax = meal_cost * .0675;
  float tip = (meal_cost + tax) * .2;
  double total_cost = meal_cost + tax + tip;

  //display 
  cout << "The meal costs $" << meal_cost << endl;
  cout << "The tax is $" << tax << endl;
  cout << "The tip is $" << tip << endl;
  cout << "The total bill is $" << total_cost << endl;


  return 0;

}