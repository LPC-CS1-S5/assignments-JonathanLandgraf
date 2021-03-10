#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int main()
{
  ifstream ifs;


  ifs.open("employee.txt");
  ifs (ifs.fail){
    cerr << "File failed to open\n";
    exit(0);
  }

  






  return 0;
}