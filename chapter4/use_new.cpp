#include <iostream>
#include <iterator>
#include <ostream>

int main(void) {
  using namespace std;

  int nights = 1001;
  int *pt = new int;
  *pt = 1001;
  cout << "nights value = " << nights << ": location " << &nights << endl;
  cout << "int value = " << *pt << ": location " << pt << endl;

  double *pd = new double;
  *pd = 100000001.0;
  cout << "double value = " << *pd << ": location = " << pd << endl;
  cout << "location of pointer pd: " << &pd << endl;

  cout << "size of pt = " << sizeof(pt) << ": sizeof *pt = " << sizeof(*pt)
       << endl;
  cout << "size of pd = " << sizeof(pd) << ": sizeof *pd = " << sizeof(*pd)
       << endl;

  return 0;
}
