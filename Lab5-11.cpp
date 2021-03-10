#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{

  int num, mod;


  // User input and validation
  do{
    cout << "Please set the range of the list for the prime numbers \n";
    cin >> num;
  } while (num < 0 || num > 100); 
  
  //loop ends upon receiving a number betwen 0 and 100
  cout << endl;

  //Use loop to print out all primes using the user input
  for (int i=1; i<=num; i++){
    mod = num % i;  //Using modulus to find prime numbers
    if (mod > 0) {
      cout << mod << endl;
    }
  }

  return 0;
}