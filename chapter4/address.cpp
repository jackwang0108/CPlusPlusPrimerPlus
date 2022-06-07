#include <iostream>

int main(void) {
  using namespace std;

  int donuts = 6;
  double cups = 4.5;

  cout << "donuts value = " << donuts << " and donuts address = " << &donuts
       << endl;

  cout << "cup value = " << cups << " and cups address = " << &cups << endl;

  return 0;
}
