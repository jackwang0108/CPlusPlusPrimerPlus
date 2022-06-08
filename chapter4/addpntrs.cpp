#include <ios>
#include <iostream>
#include <ostream>

int main(void) {
  using namespace std;

  double wages[3] = {10000.0, 20000.0, 30000.0};
  short stacks[3] = {3, 2, 1};

  double *pw = wages;
  short *ps = &stacks[0];

  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  pw = pw + 1;
  cout << "add 1 to the pw poiner";
  cout << "pw = " << pw << ", *pw = " << *pw << endl;

  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  ps = ps + 1;
  cout << "add 1 to the ps poiner";
  cout << "ps = " << ps << ", *ps = " << *ps << endl;

  cout << "access two elements with array notation\n";
  cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
  cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1)
       << endl;

  cout << sizeof(wages) << " = sizeof wages array" << endl;
  cout << sizeof(pw) << " = sizeof pw poiner" << endl;

  return 0;
}
