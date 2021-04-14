#include <iostream>
#include <iomanip>
using namespace std;

void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);

int main()
{
  float f1, f2;
  int n1, n2;
  char check;

  do{
    cout << "Enter 'i' for int numbers or 'f' for float: ";
    cin >> check;
    if (check == "f" OR check == "F" OR check == "i" OR check == "I")
      break;
  } while(1);

  if (check == "f" OR check == "F"){
    cout << "Please enter two float numbers: ";
    cin >> f1 >> f2;
    swapTwoValues(f1, f2);
        cout << f1 << "\t" << f2;
  }
  
  else{
    cout << "Please enter two integers: ";
    cin >> n1 >> n2;
    swapTwoValues(n1, n2);
    cout << n1 << "\t" << n2;
  }

  return 0;
}

void swapTwoValues(int &n1, int &n2)
{
  int tmp;

  tmp = n1;
  n1 = n2;
  n2 = tmp;

  return;
}

void swapTwoValues(int &f1, int &f2)
{
  float tmp;
  
  tmp = f1;
  f1 = f2;
  f2 = tmp;

  return;
}