#include <iostream>
#include "tabtenn1.h"

TableTennisPlater::TableTennisPlater(
    const string &fn,
    const string &ln,
    bool ht) : firstname(fn), lastname(ln), hasTable(ht)
{
}

void TableTennisPlater::name() const
{
    std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(
    unsigned int r,
    const string &fn,
    const string &ln,
    bool ht) : TableTennisPlater(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(
    unsigned int r,
    const TableTennisPlater &tp) : TableTennisPlater(tp), rating(r)
{
}