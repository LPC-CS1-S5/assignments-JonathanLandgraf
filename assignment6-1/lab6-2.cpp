#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double powerpos (int);
double powerneg (int);
void print(double);

int main()
{
  int num;
  double power;

  cout << "Enter the power number: ";
  cin >> num;

  if (n > 0)
    power =  powerpos(int num);
  else if (n < 0)
    power = powerneg(int num);
  else
    return 1;

  print(power);

  return 0;
}

double powerpos(int n)
{
  int i = 0;
  double r = 1.0;

  while (i < n, i++)
    r = r*2;
  return r;
}

double powerneg(int n)
{
  int i = 0;
  double r = 1.0;

  while (i < n, i++)
    r = r / 2.0;
  return r;
}