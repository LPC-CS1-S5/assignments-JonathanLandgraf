#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

int getRdnum(void);
int isGreater(int);

int pre = -10;


int main()
{
  ofstream ofs;
  int num, N = 10;
  srand(time(0));  


  ofs.open("numbers.txt");
  if (ofs.fail()) {
    cerr << "File failed to open\n";
    exit(0);
  }

  for (int i=0; i < N; i++){
    num = getRdnum();
    if (isGreater(num) == 1){
      ofs << num;
      ofs << "\t";
    }
  }

  ofs.close();
  cout << "File written \n";

  return 0;
}

int getRdnum()
{
  int num;
  num = rand() % 50;
  cout << num << endl;
  return num;
}

int isGreater(int num)
{
  if (pre == -10){
    pre = num;
    return 0;
  }
  else if (pre < num){
    pre = num;
    return 1;
  }
  else
    return 0;
}