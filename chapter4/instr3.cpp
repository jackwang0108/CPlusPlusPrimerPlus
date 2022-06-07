#include <iostream>

int main(void) {
  using namespace std;

  const int ArSize = 20;
  char name[ArSize];
  char desert[ArSize];

  cout << "Enter your name: \n";
  cin.get(name, ArSize).get();
  cout << "Enter your favoriate dessert:\n";
  cin.get(desert, ArSize).get();
  cout << "I have some delicious " << desert << " for you, " << name << ".\n";

  return 0;
}
