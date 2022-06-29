#include <iostream>

#include "namesp.h"

namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person &rp){
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname;
    }

    void showPerson(const Person &rp){
        std::cout << rp.lname << ", " << rp.fname;
    }
} // namespace pers

namespace debts
{
    void getDebts(Debts &rd){
        getPerson(rd.name);
        std::cout << "Enter debts: ";
        std::cin >> rd.amount;
    }

    void showDebts(const Debts & rd){
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }

    double sumDebts(const Debts ar[], int n){
        double total = 0;
        for (int i = 0; i < n; i++)
            total += ar[i].amount;
        return total;
    }
} // namespace debts

