#include <iostream>
#include <iomanip>
using namespace std;

int evenSum (int);
int oddSum (int);

int sumE, sumO = 0;

int main()
{
  int num, oddS = 0, evenS = 0;

  do{

    cout << "Enter a number to add: "
    cin >> num;

    if (num == -1)
      break
    else if (num % 2)
      evenS = evenSum(num);
    else
      oddS = oddSum(num);
  } while (1);

  cout << "The even summation is: " << sumE << endl;
  cout << "The odd summations is: " << sumO << endl;
  return 0;
}


int evenSum(int num)
{
  sumE = sumE + num;
  return sumE;
}

int oddSum(int num)
{
  sumO = sumO + num;
  return sumO;
}