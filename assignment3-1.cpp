#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  //initialize all varaibles
  int seatsA = 0;
  int seatsB = 0;
  int seatsC = 0;
  float salesA, salesB, salesC = 0;

  //display 
  cout << "How many seats in Class A were sold? \n";
  cin >> seatsA;
  salesA = 15.0 * seatsA;

  cout << "How many seats in Class B were sold? \n";
  cin >> seatsB;
  salesB = 12.0 * seatsB;

  cout << "How many seats in Class C were sold? \n";
  cin >> seatsC;
  salesC = 9.0 * seatsC;

  cout << "The sales for Class A are $" << setprecision(2) << fixed << salesA << ".\n";
  cout << "The sales for Class B are $" << setprecision(2) << fixed << salesB << ".\n";
cout << "The sales for Class C are $" << setprecision(2) << fixed << salesC << ".\n";
cout << "The total sales are $" << setprecision(2) << fixed << salesA + salesB + salesC << ".\n";
  return 0; 

}