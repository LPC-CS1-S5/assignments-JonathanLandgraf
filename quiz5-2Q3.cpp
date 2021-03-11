#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  int b, e, i, j;

  do {
    cout << "Please enter in the range to find the prime numbers: ";
    cin >> b >> e;
  } while (e > 100 || b < 1);
    
  for (i=b; i <= e; i++){
    for (j=2; j < i; j++){
      if (i % j == 0){
        break;
      }
    }
    if (j == i){
      cout << i << ", ";
    }
  }
  

  /**
	 for (int num=start; num <= finish; num++)
	 { // num : from start to finish
	 	// num is prime or not, num = 6; 
	 	for(i=2; i < num; i++) { // 2,3,4,5
	 		if (num % i == 0)
	 			break;
	 	}
	 	if ( i == num ) // we have full iterations. didn't meet break. 
	 		cout << num << " is a prinme";
	 }


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
  **/
  cout << "are prime numbers";

  return 0;
}