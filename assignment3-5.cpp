#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//Make a program that generates 3 random numbers.
  //Whenever you run the program, it generates completely different numbers.
  //The generated numbers must be between 0 and 99
  //Assign the values to variables num1, num2, num3.
  //Get the summation and average of all values.
  //print out the summation result and all generated values.
    //output format: two precision after the decimal point.

int main()
{
  //initialize all varaibles
  int num1, num2, num3 = 0;
  float avg = 0.0;
  const int maxRand = 99;
  const int minRand = 0;

  unsigned seed = time(0);  //has a unique seed that changes every second
  
  //Roll randomized numbers and find sum
  srand(seed);  //randomized seed
  //equation to set the limit of the max and min range of the random number generation
  num1 = (rand() % (maxRand - minRand + 1) + minRand);    
  num2 = (rand() % (maxRand - minRand + 1) + minRand);
  num3 = (rand() % (maxRand - minRand + 1) + minRand);

  avg = (num1 + num2 + num3) / 3.0;
  //display results
  cout << "The random numbers are: " << num1 << ", " << num2 << ", and " << num3 << ".\n";
  cout << "The average of the random numbers is: " << setprecision(2) << fixed << avg << endl;

  return 0; 

}