#include <iostream>
#include <iomanip>
using namespace std;
//Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.

int main()
{
  //initialize all varaibles
  int males, females = 0;
  float percentM, percentF = 0.0;

  //display 
  cout << "How many males are registered for the class? \n";
  cin >> males;
  cout << "How many females are registered for the class? \n";
  cin >> females;
  float total = males + females;

  //calculate percent and display results
  percentM = (males/total)* 100;
  percentF = (females/total) * 100;

  cout << "There are " <<setprecision(2) << fixed << percentM << "% males in the class and " << percentF << "% females in the class \n";

  return 0; 

}