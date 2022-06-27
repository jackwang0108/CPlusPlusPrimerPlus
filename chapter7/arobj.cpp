#include <array>
#include <cmath>
#include <iostream>
#include <string>

const int Seasons = 4;

const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall",
                                                 "Winter"};

void fill(std::array<double, Seasons> *pa);
void show(std::array<double, Seasons> da);

int main(void) {
  using namespace std;

  std::array<double, Seasons> expenses;
  fill(&expenses);
  show(expenses);

  return 0;
}

void fill(std::array<double, Seasons> *pa) {
  using namespace std;

  for (int i = 0; i < Seasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> (*pa)[i];
  }
  return;
}

void show(std::array<double, Seasons> da) {
  using namespace std;
  double total = 0.0;
  cout << "\nEXPENSES\n";

  for (int i = 0; i < Seasons; i++) {
    cout << Snames[i] << ": $" << da[i] << endl;
    total += da[i];
  }
  cout << "Total Expenses: $" << total << endl;

  return;
}
