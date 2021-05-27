#include    <iostream>
#include    <iomanip>
using namespace std;
 
void    shiftleft(int   [], int, int);
void    shiftleftone(int    [], int);
void    printout(int    [], int);
 
 
int     main()
{
  const   int SIZE=10;
  int     shiftcount;
  int     number[SIZE] = {0,1,2,3,4,5,6,7,8,9};


  cout << "Enter your number for circular shift left\n";
  cin >>  shiftcount;

  printout(number, SIZE);
  shiftleft(number, SIZE, shiftcount);
  printout(number, SIZE);
}
void    shiftleft(int   number[], int SIZE, int count)
{
  int tmp;
  for (int i = 0; i < SIZE; i++){
    number [i] = count + i;
    cout << number [i] << "\t";
  }
  return;
}
void  shiftleftone(int number[], int SIZE)
{
  int tmp;
  for (int i = 0; i < SIZE; i++){
    tmp = number [i+1];
    number [i+1] = number [i];
    number [i] = tmp;
  }
}
void    printout(int    number[], int SIZE)
{
  for (int i =0; i < SIZE; i++){
    cout << number[i] << "\t";
  }
  cout << endl;
  while (number[i] == number[i+1]){
    number[i] = number[i+1] + i;
    number[i+1] = number[i] + i;
    cout << number[i] << "\t" << number [i+1] <<endl;
    }
  }
}
