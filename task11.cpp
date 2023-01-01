#include <iostream>
using namespace std;
void day(string dayName);

main()
{
while(true)
{
  string dayName;
  cout << "Enter day:";
  cin >> dayName; 
  day(dayName);
}
}
void day(string dayName)
{
  int purchaseAmount;
  int discountAmount1;
  int discountAmount2;
  int payableAmount1;
  int payableAmount2;
  cout << "Enter total purchase amount:";
  cin >> purchaseAmount;
  discountAmount1= (10 * purchaseAmount) / 100;
  payableAmount1 = purchaseAmount - discountAmount1;
  if(dayName == "sunday")
   {
     cout << "Payable amount is:" << payableAmount1 << endl;
   }  
  discountAmount2= (5 * purchaseAmount) / 100;
  payableAmount2= purchaseAmount - discountAmount2;
  if(dayName != "sunday")
   {
     cout << "Paybale amount is:" << payableAmount2 << endl;
   }
}
