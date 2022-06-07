#include <iostream>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main(void) {
  using namespace std;

  inflatable guests[2] = {{"Bamdi", 0.5, 21.99}, {"Godzilla", 2000, 565.00}};

  cout << "The guests " << guests[0].name << " and " << guests[1].name << endl
       << "have a combined volume of " << guests[0].volume + guests[1].volume
       << " cubic feets" << endl;

  return 0;
}
