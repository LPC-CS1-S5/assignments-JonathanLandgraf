#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int b, e;

  do {
    cout << "Please enter in the range to find the prime numbers: ";
    cin >> b >> e;
  } while (e > 100 || b < 1);
    
  int i = b;

  while (i < e){
    if (i < 11){
      if (i == 2){
        cout << "2, ";
      }
      else if (i == 3){
        cout << "3, ";
      }
      else if (i == 5){
        cout << "5, ";
      }
      else if (i == 7){
        cout << "7, ";
      }
    }
    if (i % 2 != 0){
      if (i % 3 != 0){
        if (i % 5 != 0){
          if (i % 7 != 0){
            cout << i << ", ";
          }
        }
      }
    }

    i++;
  }
  cout << endl;

  return 0;
}