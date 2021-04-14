#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void gerRandnum(int &, int &, int &);
int  findMin(int, int, int);
void printResult(int, int, int, int);


int main()
{

  srand(time(0));
  int min, n1, n2, n3;

  gerRandnum(n1, n2, n3);
  min = findMin(n1, n2, n3);
  printResult(n1, n2, n3, min);

  return 0;
}

void gerRandnum(int &n1, int &n2, int &n3)
{
  n1 = rand() % 101;
  n2 = rand() % 101;
  n3 = rand() % 101;

  return;
}

int findMin(int num1, int num2, int num3)
{
  int min = num1;

  if (min > num2)
    min = num2;
  if (min > num3)
    min = num3;
  return min;
}

void printResult(int num1, int num2, int num3, int m)
{
  cout << "The random numbers are: " << num1 << ", " << num2 << ", and " << num3 <<". \n";
  cout << "The minimum is: " << m << endl;
  return;
}