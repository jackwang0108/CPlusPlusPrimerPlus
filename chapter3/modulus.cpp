#include <iostream>

int main() {
  using namespace std;

  const int Lbs_per_stn = 14;
  int lbs;

  cout << "Enter your weight in pounds: ";
  cin >> lbs;

  int stones = lbs / Lbs_per_stn;
  int pounds = lbs % Lbs_per_stn;
  cout << lbs << " pounds are " << stones << " stones, " << pounds
       << " pound(s)\n";

  return 0;
}
