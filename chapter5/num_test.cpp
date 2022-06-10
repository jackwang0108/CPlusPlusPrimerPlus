#include <iostream>

int main(void) {
  using namespace std;

  cout << "Enter the starting countdown value: ";
  int limit;
  cin >> limit;

  int i;
  for (i = limit; i > 0; i--)
    cout << "i = " << i << "\n";
  cout << "Done now that i = " << i << "\n";

  return 0;
}
