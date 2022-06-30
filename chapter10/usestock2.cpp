#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main(void){
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Buffo Objects", 200, 20.0),
        Stock("Monolithic Obelies", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.25)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();

    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);

    std::cout << "\nMost valuable holdings:\n";
    top->show();

    return 0;
}