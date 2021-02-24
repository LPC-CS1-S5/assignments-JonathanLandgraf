#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num1, miles, weight = 0;
  float price = 0.0;

  cout << "Please enter in the weight of the package that will be shipped: ";
  cin >> weight;

  cout << "\n Please enter the amount of miles that the package will be dilivered to: "
  cin >> miles;

  if (weight < 0){
    cout << "Not a valid weight. \n";
  }
  
  else if (weight < 10)
  {
    
  }
  return 0;
}