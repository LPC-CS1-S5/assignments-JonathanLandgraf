#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int getsum(int);


int main()
{
  int N, sum;


  do {
    cout << "Please enter the number of inputs: ";
    cin >> N;
    if (N != -1){
      sum = getsum(int N);
      cout << "The sum is: " << sum << endl;
    }

  } while (N != -1);

  return 0;
}

int getsum(int N)
{
  int sum = 0, num;

  for (int i = 0, i < n, i++){
    cout << "Enter the number: ";
    cin >> num;
    sum = sum + num;
  }
  return sum;
}