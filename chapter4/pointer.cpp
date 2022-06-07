#include <iostream>
#include <ostream>

int main(void) {
  using namespace std;

  int updates = 6;
  int *p_updates;
  p_updates = &updates;

  cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates
       << endl;

  cout << "Address: &updates = " << &updates << ", p_updates = " << p_updates
       << endl;

  *p_updates = *p_updates + 1;
  cout << "Now updates = " << updates << endl;

  return 0;
}
