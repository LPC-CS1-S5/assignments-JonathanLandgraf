#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
  string  userinput;
  string  words= "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";
  int lwords = strlen(words);
  int luser = strlen(userinput);
  char letters[] = words;
  char *stringPointer = nullptr;
  int count = 0;

  cout << "Enter user string "; 
  cin >> userinput;



  do{
    stringPointer = strstr (letters[i], userinput);
    if (stringPointer != nullptr){
      count += 1;
      cout << "Occurance found at " << stringPointer << endl;
    }
  } while (int i = 0; i < lwords - 1 - luser; i++);

  return 0;
}