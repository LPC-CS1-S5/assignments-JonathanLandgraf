#include    <iostream>
#include    <ctime>
#include    <cstdlib>
#include    <iomanip>
using   namespace   std;

int makearray(int []);
void bubble(int [], int);
void printout(int [], int);


const int SIZE = 100;

int main()
{
  int number[SIZE];
  int last;

  srand(time(0));

  last = makearray(number);
  printout(number, last);
  bubble(number, last);
  printout(number, last);
}

int makearray(int number[])
{
  int rndsize;
  do {
    rndsize = rand() % 21;
  } while (rndsize < 10);
  for (int i = 0; i < rndsize; i++){
    number[i] = rand() % 101;
  }
  return rndsize;
}
void bubble(int number[], int last)
{
  int tmp;
  for (int i = 1; i < last; i++){
    if (number[i-1] > number [i]){
      tmp = number[i-1];
      number[i-1] = number[i];
      number[i] = tmp;
    }
  }
  return;
}
void printout(int number[], int last)
{
  for (int i = 0; i < last; i++){
    cout << number[i] << "\t";
  }
  cout << endl;
  return;
}
