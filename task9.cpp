#include <iostream>
using namespace std;
void name(string);

main()
{
  string userName;
  name(userName);
}
void name(string)
{
  string userName;
  cout << "Enter your name:";
  cin >> userName;
while(true)
{
  cout << userName << endl;
}
}
