#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

void getInput(int &, int &);
bool isSame (int, int);
double intDivision (int, int);
void fileWrite (ofstream &, double);



int main()
{
  int num1, num2;
  double div;

  ofstream ofs;
  ofs.open("question5.txt");
  if (ofs.fail()) {
    cerr << "File failed to open\n";
    exit(0);
  }

  do {
    getInput(num1, num2);
    if (isSame(num1, num2) == false)
      break;
    div = intDivision(num1, num2);
    fileWrite(ofs, div);
  } while (1);

  ofs.close();
  cout << "File closed \n";

  return 0;
}

void getInput(int &num1, int &num2)
{
  cout << "Please enter two numbers to divide: ";
  cin >> num1 >> num2;
  return;
}

bool isSame (int num1, int num2)
{
  if (num1 == num2){
    cout << "Program terminated \n";
    return false;
  }
  else
    return true;
}

double intDivision (int num1, int num2)
{
  double d;
  if (num1 > num2)
    d = num1 / static_cast<double>(num2);
  else
    d = num2 / static_cast<double>(num1);
  return d;
}

void fileWrite (ofstream &ofs, double d)
{

  ofs << d;
  ofs << "\n";
  cout << "Line written. \n";

  return;
}