#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int n, m, power;
  int i = 1;
  bool check = false;
  //0 < n && n > 10 && 1 > m && m > 10

  do {
  cout << "Please enter in a number and the power (with a space between the inputs): ";
  cin >> n >> m;
  cout << endl;
  if (n > 0 && n < 10){
    if (m > 0 && m < 10){
      check = true;
    }
  }
  } while (check == false);
  
  cout << "1" << endl;
  while (i <= m){
    power = n * i;
    cout << power << endl;
    i++;
  }





  return 0;
}