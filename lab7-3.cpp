#include    <iostream>
#include    <ctime>
#include    <cstdlib>
#include    <cmath>
#include    <iomanip>
using   namespace   std;
 
int     makearray(int []);
void    printout(int [], int);
 
void    swapfold(int [], int);
void    sumfold(int [], int);
void    equalfold(int [], int [],  int);
 
 
const   int     SIZE = 100;
 
int     main()
{
  int     mask[SIZE];
  int     number[SIZE];
  int     equal[SIZE];
  int     last;
  int     ppc[4][4] {{10,30,20,40},
                    {15,25,35,65},
                    {13,21,9,42},
                    {19,22,4,73}};


  last = makearray(number);
  printout(number, last);

  swapfold(number, last);
  printout(number, last);

  sumfold(number, last);
  printout(number, ceil(last/2.0));

  

  last = makearray(number);
  printout(number, last);
  
  equalfold(number, equal, last);
  printout(equal, ceil(last/2.0));
}
 
void    swapfold(int number[], int last) 
{
  for(int i=0; i<last/2; i++) { 
    swap(number[i], number[last-i-1]);
  }
  // for(int i=0, j=last-1; i<j; i++, j--) {  // Works same. but use two variables.
  //  swap(number[i], number[j]);
  // }
  for(int i=0; j=last-1; i++; j--){
    swap(number[i], number[j]);
  }
  return;
}
void    sumfold(int number[], int last) //* 10 20 30 40
{
  for(int i=0; i<last/2; i++) { 
    cout << number[i] << "\t";
    cout << number[last-i-1] << endl;
  }
  return;
  
}
void    equalfold(int number[], int equal[], int last)
{
  for (int i = 0; i < (last/2); i++){
    if (number[i] == number[i + (last/2)])
      equal[i] = 1;
    else
      equal[i] = 0;
  }
  return;
}
 
int     makearray(int   number[])
{
  int     last;
  srand(time(0));
  do {
    last = rand() % 20 ;
  } while (last < 10);

  for(int i=0; i<last; i++)
    number[i] = rand() % 10;
  return last;
}
void    printout(int number[], int last)
{
  for(int i=0;i<last; i++)
    cout << setw(5) << number[i] ;
  cout << endl;
}