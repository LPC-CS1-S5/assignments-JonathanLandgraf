#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum(void);
int getRdnum(int);
int getRdnum(int, int);

int main()
{
  int input, n1, n2, rnd;
  srand(time(0));

  do{
    cout << "Enter 0 to generate a number, 1 to set the end range, 2 for a custom range, or -1 to exit: ";
    cin >> input;

    if (input == 0){
      rnd = getRdnum();
      cout << "Random number: " << rnd << endl;
    }
    else if (input == 1){
      cout << "Enter the ending range: ";
      cin >> n2;
      rnd = getRdnum(n2);
      cout << "The random number with ending range " << n2 << " is: " << rnd << endl;
    }
    else if (input == 2){
      cout << "Please enter in the beginning number: ";
      cin >> n1;
      cout << "Please enter the ending number: ";
      cin >> n2;
      rnd = getRdnum(n1, n2);
      cout << "The random number with range " << n1 << " and " << n2 << " is: " << rnd << endl;
    }

  } while (input != -1);

  cout << "Ending... \n";
  return 0;
}

int getRdnum()
{
  int num;
  num = rand() % 100;
  return num;
}

int getRdnum(int n2)
{
  int num;
  num = rand() % (n2 + 1);
  return num;
}

int getRdnum(int n1, int n2)
{
  int num;
  num = rand() % ((n2 - n1 + 1) + n1);
  return num;
}