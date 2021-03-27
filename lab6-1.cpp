#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool InputValidate (int, int);
void Prime (int, int);

int main()
{
  int beg, end;
  bool check;



  do {
    cout << "Please enter the beginning and end numbers: ";
    cin >> beg >> end;
    check = InputValidate(int beg, int end);
  } while (!check);

  Prime (int beg, int end);

  return 0;
}

bool InputValidate (int b, int e)
{
  if ( (b > e) || (b < 0) || (end < 0))
    return true;
  else
    return false;
}

void Prime(int b, int e)
{
  int i, j;
  
  for (i  =b, i < e, i++){
    for (j = 2, j <= (i/2), j++){
      if (i % j == 0)
        break;
    }
    if (j > (i/2))
      cout << i << " is a prime number \n";
  }
}