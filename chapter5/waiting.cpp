#include <bits/types/clock_t.h>
#include <ctime>
#include <iostream>

int main(void) {
  using namespace std;

  cout << "Enter the delay time, in seconds: ";
  float secs;
  cin >> secs;

  clock_t delay = secs * CLOCKS_PER_SEC;
  clock_t start = clock();
  while (clock() - start < delay)
    ;
  cout << "Done \a\n";

  return 0;
}
