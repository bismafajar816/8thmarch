#include <iostream>
using namespace std;
void reserve(string type, string seat);
main()
{
   string type;
   string seat;
}
void reserve(string type, string seat)
{
  cout << "Enter the type to reserve: ";
  cin >> type;
  cout << "Enter seat number: ";
  cin >> seat;
}