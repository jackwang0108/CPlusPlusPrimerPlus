#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main(void){
    using debts::Debts;
    using debts::showDebts;

    Debts golf = {
        { "Benny", "Goatsniff" },
        120.0
    };
    showDebts(golf);
    other();
    another();

    return 0;
}

void other(void){
    using std::cout;
    using std::endl;
    using namespace debts;

    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;

    Debts zippy[3];
    int i;
    for (i = 0; i < 3; i++)
        getDebts(zippy[i]);

    
    for (int i = 0; i < 3; i++)
        showDebts(zippy[i]);

    cout << "Total debts: $" << sumDebts(zippy, 3) << endl;

    return;
}

void another(void){
    using pers::Person;

    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;

    return;
}