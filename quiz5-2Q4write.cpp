#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  ofstream ofs;
  int n, ID;
  string name, dep;
  double salery;



  ofs.open("employee.txt");
  if (ofs.fail()) {
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

		ofs << ID << " ";
		ofs << name << " ";
		ofs << dep << " ";
		ofs << salery << endl;
		// need to write space between fields
		
		
    i++;
  }
  ofs.close();
  cout << "File written \n";
  return 0;
}