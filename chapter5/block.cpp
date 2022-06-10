#include <algorithm>
#include <iostream>

int main(void) {
  using namespace std;

  cout << "The Amazing Accounto will sum and average five numbers for you.\n";
  cout << "Please enter five values: \n";

  double number;
  double sum = 0.0;

  for (int i = 1; i <= 5; i++) {
    cout << "Value " << i << ": ";
    cin >> number;
    sum += number;
  }

  cout << "Five exquisite choices indeed! ";
  cout << "The sum to " << sum << endl;
  cout << "and average to " << sum / 5 << ".\n";
  cout << "The Amazing Accounto bids your adieu!\n";

  return 0;
}
