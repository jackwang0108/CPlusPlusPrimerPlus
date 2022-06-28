#include <exception>
#include <iostream>
#include <string>
#include <type_traits>

struct free_thorws {
  std::string name;
  int made;
  int attemps;
  float percent;
};

void display(const free_thorws &ft);
void set_pc(free_thorws &ft);
free_thorws &accumulate(free_thorws &target, const free_thorws &source);

int main(void) {
  using namespace std;

  free_thorws one = {"Ifelsa Branch", 13, 14};
  free_thorws two = {"Andor Knott", 10, 16};
  free_thorws three = {"Minnie Max", 7, 9};
  free_thorws four = {"Whily Looper", 5, 9};
  free_thorws five = {"Long Long", 6, 14};
  free_thorws team = {"Throwgoods", 0, 0};

  free_thorws dup;

  set_pc(one);
  display(one);
  accumulate(team, one);
  display(team);

  display(accumulate(team, two));
  accumulate(accumulate(team, three), four);
  display(team);

  dup = accumulate(team, five);
  std::cout << "Displaying team:\n";
  display(team);
  std::cout << "Displaying dup after assignment:\n";
  display(dup);
  set_pc(four);

  accumulate(dup, five) = four;
  std::cout << "Displaying dup after ill-asvised assignment:\n";
  display(dup);

  return 0;
}

void display(const free_thorws &ft) {
  using std::cout;
  cout << "Name: " << ft.name << "\n";
  cout << "  Made: " << ft.made << "\t";
  cout << "Attemps: " << ft.attemps << "\t";
  cout << "Percent: " << ft.attemps << "\n";
}

void set_pc(free_thorws &ft) {
  if (ft.attemps != 0)
    ft.attemps = 100.0f * float(ft.made) / float(ft.attemps);
  else
    ft.percent = 0;
}

free_thorws &accumulate(free_thorws &target, const free_thorws &source) {
  target.attemps += source.attemps;
  target.made += source.made;
  set_pc(target);
  return target;
}
