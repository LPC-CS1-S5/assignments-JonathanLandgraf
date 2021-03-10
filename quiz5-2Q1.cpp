#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int num, min;
  srand(time(0));  

	// Use the loop structure to generate the Random number
	// for ( ... ) {
	//.    num = rand() % 100;
	//     if ( min > num)
	//         ....
  // }
cout << "The generated numbers are: ";
for (int i=0; i < 5; i++) {
  num = rand() % 100;
  cout << num << ", ";
  if (min > num){
    min = num;
  }
}

cout << "\nThe minimum value is " << min << endl;



  /**
  OLD LINES OF CODE
  
  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;
  num4 = rand() % 100;
  num5 = rand() % 100;

  cout << "The random numbers generated are: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5 << endl;

  if (num1 >= num2){
    min = num2;
  }
  else {
    min = num1;
  }
  if (min > num3){
    min = num3;
  }
  if (min > num4){
  min = num4;
  }
  if (min > num5){
  min = num5;
  }
  
  cout << "The minimum number is: " << min <<endl;
  **/
  
  
  return 0;
}