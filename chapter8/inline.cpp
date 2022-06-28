#include <iostream>

inline double square(double x) { return x * x; }

int main(void) {
  using namespace std;

  double a, b;
  double c = 13.0;

  a = square(5.0);
  b = square(4.7 + 7.5);

  cout << "a = " << a << ", b = " << b << "\n";
  cout << "c = " << c << ", c square = " << square(++c) << endl;
  cout << "Now c = " << c << "\n";

  return 0;
}
