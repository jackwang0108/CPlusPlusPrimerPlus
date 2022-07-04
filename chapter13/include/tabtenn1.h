#ifndef TABTENN1_H_
#define TABTENN1_H_

#include <string>

using std::string;

class TableTennisPlater
{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlater(const string &fn = "none", const string &ln = "none", bool ht = false);

    void name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer : public TableTennisPlater
{
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlater &tp);

    unsigned int Rating() const { return rating; }
    void ResetRating(unsigned int r) { rating = r; }
};

#endif