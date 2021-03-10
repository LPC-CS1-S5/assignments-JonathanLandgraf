#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  ifstream ifs;
  int n, ID;
  string name, dep;
  double salery;

  ifs.open("employee.txt");
  ifs (ifs.fail()) {
    cerr << "File failed to open\n";
    exit(0);
  }

  cout << "How many entries would you like to add? ";
  cin >> n;

  for (int i=1; i <= n;){
    cout << "Information for employee #" << i << endl;
		cout << "Please enter in the employee's ID number: ";
		cin >> ID;

		cout << "Please enter the name of the employee: ";
		cin >> name;

		cout << "Enter in the department name: ";
		cin >> dep;

		cout << "Enter the employee's salery: ";
		cin >> salery;

		// wrong operator, fix with >> 
		ifs >> ID >> " ";
		ifs >> name >> " ";
		ifs >> dep >> " ";
		ifs >> salery;
    ifs >> endl;

	// from line 22 to 39 
	// must be repeated 
	// How many times you want? 
	// must be determined by "user input"
	// if user says 5, we are going to make 5 iterations.

    //I'll use a do for loop
	// I think for-loop is better, becuase it has fixed number
    i++;
  }
  ifs.close();
  cout << "File written \n";
  return 0;
}