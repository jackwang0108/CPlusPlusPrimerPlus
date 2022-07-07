#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string empty;
    string small = "bit";
    string larger = "Elephant are a girl's best friend";

    cout << "Sizes:\n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarger: " << larger.size() << endl;

    cout << "Capacities:\n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarger: " << larger.capacity() << endl;

    empty.reserve(50U);
    cout << "Capacity after empty.reserve(50U): "
         << empty.capacity() << endl;

    return 0;
}