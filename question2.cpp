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
  int min;

  gerRandnum(int &n1, int &n2, int &n3);
  min = findMin(int n1, int n2, int n3);
  printResult(n1, n2, n3, min);

  return 0;
}