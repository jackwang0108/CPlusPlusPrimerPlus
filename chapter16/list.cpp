#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

void outint(const int n) { std::cout << n << " "; }

int main(void)
{
    using namespace std;

    list<int> one(5, 2);
    int stuff[5] = {1, 2, 4, 8, 6};

    list<int> two;
    two.insert(two.begin(), stuff, stuff + 5);

    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);
    three.insert(three.end(), more, more + 6);

    cout << "List one: ";
    for_each(one.cbegin(), one.cend(), outint);

    cout << endl
         << "List two: ";
    for_each(two.cbegin(), two.cend(), outint);

    cout << endl
         << "List three: ";
    for_each(three.cbegin(), three.cend(), outint);

    cout << endl
         << "List three after minus 2s: ";
    three.remove(2);
    for_each(three.cbegin(), three.cend(), outint);

    cout << endl
         << "List three after splice: ";
    three.splice(three.begin(), one);
    for_each(three.cbegin(), three.cend(), outint);
    cout << endl
         << "List one: ";
    for_each(one.cbegin(), one.cend(), outint);

    cout << endl
         << "List three after unique: ";
    three.unique();
    for_each(three.cbegin(), three.cend(), outint);

    cout << endl
         << "List three after sort & unique: ";
    three.sort();
    three.unique();
    for_each(three.cbegin(), three.cend(), outint);

    cout << endl
         << "Sorted two merged into three: ";
    two.sort();
    three.merge(two);
    for_each(three.begin(), three.end(), outint);
    cout << endl;

    return 0;
}