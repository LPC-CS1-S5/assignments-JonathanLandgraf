#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{

  ifstream ifs;
  string fileLine, name, dep;
  int ID, i, n = 0;
  double salery, sum, average = 0.0;

  ifs.open("employee.txt");
  if (ifs.fail()){
    cerr << "File failed to open\n";
    exit(0);
  }


  /**
  while (ifs >> fileLine){
    cout << fileLine << endl;
  }
  **/

  cout << "How many lines? ";
  cin >> n;

  cout << "==============================\n";
  cout << "ID" << setw (8) << "name" << setw (10) << "department" << setw (12) << "salery\n";
  cout << "==============================\n";

  while (i < n){
    ifs >> ID;
    ifs >> name;
    ifs >> dep;
    ifs >> salery;
    sum = sum + salery;

    cout << ID << setw(8) << fixed << name << setw(8) << fixed << dep << setw(12) << fixed << setprecision(2) << salery << endl;
    i++;
  }
    
  ifs.close();







  return 0;
}