#include <iostream>
#include <string>
#include <memory>

int main(void){
    using namespace std;

    auto_ptr<string> films[5] = {
        auto_ptr<string> (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck Walks")),
        auto_ptr<string> (new string("Chicken Runs")),
        auto_ptr<string> (new string("Truky Errors")),
        auto_ptr<string> (new string("Goose Eggs"))
    };

    auto_ptr<string> pwin;
    // films[2]放弃了"Chichen Runs"的所有权，内置指针被置为NULL
    pwin = films[2];

    cout << "The nominees for best avain baseball film are\n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "The winner is " << *pwin << "!\n";

    cin.get();

    return 0;
}