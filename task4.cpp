#include <iostream>
using namespace std;
void marks(int number);

main()
{
  int number;
  cout <<"Enter your marks:";
  cin >> number;
  marks(number);
}
void marks(int number)
{
  if(number > 50)
 {
   cout << "Passed" << endl;
 }
  if(number < 50) 
 {
   cout <<"Failed" << endl;
 }
}
