#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int n, m;

  do {
  cout << "Please enter in a number and the power (with a space between the inputs): ";
  cin >> n >> m;
  cout << endl;
  } while (0 < n < 10 && 1 <= m <= 10);







  return 0;
}