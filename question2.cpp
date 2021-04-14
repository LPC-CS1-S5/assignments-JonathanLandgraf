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
  int min;

  gerRandnum(int &n1, int &n2, int &n3);
  min = findMin(int n1, int n2, int n3);
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

findMin(int num1, int num2, int num3)
{
  int min = num1;

  if (min > num2)
    min = num2;
  if (min > num3)
    min = num3;
  return min;
}

printResult(n1, n2, n3, min)
{
  
}