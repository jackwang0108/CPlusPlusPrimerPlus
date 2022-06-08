#include <cstring>
#include <iostream>

using namespace std;

char *getname(void);

int main() {
  char *name;

  name = getname();
  cout << name << " at " << (int *)name << "\n";
  delete[] name;

  name = getname();
  cout << name << " at " << (int *)name << "\n";
  delete[] name;

  return 0;
}

char *getname(void) {
  char temp[80];
  cout << "Enter last name: ";
  cin >> temp;
  char *pn = new char[strlen(temp) + 1];
  strcpy(pn, temp);

  return pn;
}
