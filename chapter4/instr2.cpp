#include <iostream>

int main(void) {
  using namespace std;

  const int ArSize = 20;
  char name[ArSize];
  char desert[ArSize];

  cout << "Enter your name: \n";
  cin.getline(name, ArSize);
  cout << "Enter your favoriate dessert:\n";
  cin.getline(desert, ArSize);
  cout << "I have some delicious " << desert << " for you, " << name << ".\n";

  return 0;
}
