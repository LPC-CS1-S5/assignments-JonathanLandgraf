#include <iostream>
using namespace std;

int main()
{
  //initialize all varaibles
  float regular_price = 59.95;
  float discount_amount = regular_price * 0.2;
  float sales_price = regular_price - discount_amount;


  //display 
  cout << "The regular price is $" << regular_price << endl;
  cout << "Discount amount is $" << discount_amount << endl;
  cout << "The sales price is $" << sales_price << endl;

  return 0;

}