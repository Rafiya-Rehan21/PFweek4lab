#include <iostream>
using namespace std;
void ifSunday(string day);

main ()
{
  string day;
  cout << "Enter day i.e is sunday:";
  cin >> day;
  ifSunday(day);
}
void ifSunday(string day)
{ 
  int purchaseAmount;
  int discountAmount;
  int payableAmount;
  cout << "Enter total purchase amount :";
  cin >> purchaseAmount; 
  discountAmount = (10 * purchaseAmount) / 100;
  payableAmount= purchaseAmount - discountAmount;
  if(day == "sunday")
 {
   cout << "Total payable amount is:" << payableAmount << endl;
 }
  if(day != "sunday")
 {
  cout << "Payable amount is:" << purchaseAmount << endl;
 }
}  

