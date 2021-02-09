#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Convert Celcius to Fahrenheit

int main()
{
  //initialize all varaibles
  string month1, month2, month3 = " "; 
  float rain1, rain2, rain3, sum = 0.0;

  //Collect information
  cout << "What is the name of the month and the amount of rain? (seperate answer with a space) \n";
  cin >> month1;
  cin >> rain1;

  cout << "What is the name of the second month and the amount of rain? \n";
  cin >> month2;
  cin >> rain2;

  cout << "What is the name of the third month and the amount of rain? \n";
  cin >> month3;
  cin >> rain3;

  sum = (rain1 + rain2 + rain3) / 3.0;

  //display results
  cout << "The average of the three months of " << month1 + ", " << month2 + ", and " <<  month3 + " " << "is: " << setprecision(3) << fixed << sum << endl;

  return 0; 

}