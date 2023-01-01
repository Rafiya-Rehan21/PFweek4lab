#include <iostream>
using namespace std;
void add(int number1,int number2);
void multiply(int number1,int number2);
void subtraction(int number1,int number2);
void division(int number1,int number2);
main()
{
  int number1;
  int number2;
  char operation;
while(true)
{
   cout << "Enter number:";
   cin >> number1;
   cout << "Enter number:";
   cin >> number2;
   cout << "Enter operator(+,-,*,/):";
   cin >> operation;
   if( operation == '+' )
  {
    add(number1,number2);
  }
   if( operation== '*')
  {
    multiply(number1,number2);
  }
   if(operation== '-')
  {
    subtraction(number1,number2);
  }
  if(operation== '/')
  {
    division(number1,number2);
  }
}
}
void add(int number1,int number2)
{ 
  int sum;
  sum = number1 + number2;
  cout << "Sum is:" << sum << endl;
  
}
void multiply(int number1,int number2)
{
  int product;
  product = number1 * number2;
  cout << "Product is:" << product << endl;

}
void subtraction(int number1,int number2)
{
  int sub;
  sub = number1 - number2;
  cout << "subtraction is:" << sub << endl;
}
void division(int number1,int number2)
{
  int div;
  div = number1 / number2;
  cout <<"Division is:" << div << endl;
}