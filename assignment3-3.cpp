#include <iostream>
#include <iomanip>
using namespace std;
//Convert Celcius to Fahrenheit

int main()
{
  //initialize all varaibles
  float c, f = 0;

  //Get Celcius temperature
  cout << "What is the temperature in Celcius? \n";
  cin >> c;

  //math equation
  f = ((9.0/5) *c) + 32;

  //display results
  cout << "The temperature is " << setprecision(1) << fixed << f << " degrees in Fahrenheit \n";

  return 0; 

}