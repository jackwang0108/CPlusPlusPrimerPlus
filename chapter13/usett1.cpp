#include <iostream>
#include "tabtenn1.h"

int main(void)
{
    using namespace std;

    TableTennisPlater player1("Tera", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duckl", true);

    rplayer1.name();
    if (rplayer1.HasTable())
        cout << ": has a table." << endl;
    else
        cout << ": hasn't a table." << endl;

    player1.name();
    if (player1.HasTable())
        cout << ": has a table." << endl;
    else
        cout << ": hasn't a table." << endl;

    rplayer1.name();
    cout << "; Rating: " << rplayer1.Rating() << endl;

    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.name();
    cout << "; Rating: " << rplayer2.Rating() << endl;

    return 0;
}