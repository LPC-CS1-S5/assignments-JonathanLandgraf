#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  string name;
  int score1, score2, B=0;

  ifstream ifs;

  ifs.open("students.txt");
  if (ifs.fail()){
    cerr << "File failed to open\n";
    exit(0);
  }


  for (int i=0; i<10; i++){
    ifs >> name;
    ifs >> score1;
    ifs >> score2;

    cout << "Student name: " << name << "\t Score 1: " << score1 << "\t Score 2: " << score2 << "\t Sum: " << (score1 + score2) << "\t Avg: " << ((score1 + score2)/2.0) << endl;

    if ( ((score1 + score2)/2.0) > 80.0)
      B = B + 1;

  } 

  cout << "The number of students who's average is above an 80 is " << B  <<" students\n";


  ifs.close();
  return 0;
}
