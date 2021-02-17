#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  //initialize all varaibles
  long int num1, num2, num3 = 0;
  double sum, avg = 0.0;  // use double to advoid overflow

  unsigned newSeed = time(0);  //assign seed that changes every second
  srand(newSeed); //set  randomizer with the new seed

  //Assign the three numbers a random number and store it
  num1 = rand();
  num2 = rand();
  num3 = rand();

  //Use math to add sum and find average
  sum = num1 + num2 + num3;
  avg = sum / 3.0;

  //display results
  cout << "The three random numbers are " << num1 << ", " << num2 << ", and " << num3 << ".\n";
  cout << "The sum of the numbers are " << sum << endl;
  cout << "The average is " << setprecision(5) << avg << endl;

  //end program
  return 0; 

}