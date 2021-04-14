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
    cout 
  }
    


  return 0;
}