#include <iostream>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main() {
  using namespace std;

  inflatable guest = {"Glorious Gloria", 1.88, 29.99};
  inflatable pa1 = {"Audacious Arthur", 3.12, 32.99};

  cout << "Expand your guest list with " << guest.name << " and " << pa1.name
       << " !\n";

  cout << "You can have both for $" << guest.price + pa1.price << "!\n";

  return 0;
}
