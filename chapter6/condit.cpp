#include <iostream>

int main(void) {
  using namespace std;

  int a, b;

  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << "The larger of " << a << " and " << b;
  int c = a > b ? a : b;
  cout << " is " << c << endl;

  return 0;
}
