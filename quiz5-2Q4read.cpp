#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{

  ifstream ifs;
  string fileLine;

  ifs.open("employee.txt");
  ifs (ifs.fail){
    cerr << "File failed to open\n";
    exit(0);
  }

  while (ifs >> fileLine){
    cout << fileLine << endl;
  }
    
  ifs.close();







  return 0;
}