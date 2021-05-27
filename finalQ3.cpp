#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int SIZE1=5;
  const int SIZE2=10;
  int numbers1[SIZE1] = {2, 3, 5, 9, 10};
  int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};
  int j = 0;

  for (int i = 0; i < SIZE2; i++) {
    if (numbers2[i] == numbers1[j])
      j += 1;
  }

  if (j == 5)
    cout << "numbers1 is a subset of numbers2 \n";

}