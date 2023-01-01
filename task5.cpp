#include <iostream>
using namespace std;
void greaterNumber(int number1,int number2);

main()
{
  int number1;
  int number2;
  cout << "Enter 1st number:";
  cin >> number1;
  cout << "Enter 2nd number:";
  cin >> number2;
  greaterNumber(number1,number2);
}
void greaterNumber(int number1,int number2)
{
  if (number1 > number2)
 {
   cout << number1 << endl;
 }
  if (number2 > number1)
 {
   cout << number2 << endl;
 }
}

