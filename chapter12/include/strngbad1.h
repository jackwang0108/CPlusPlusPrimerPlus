#include <iostream>

#ifndef STRNGBAD1_H_
#define STRNGBAD1_H_

class StringBad
{
private:
    char *str;
    int len;
    static int num_strings;

public:
    StringBad();
    StringBad(const char *s);
    StringBad(StringBad &sb);
    ~StringBad();

    StringBad & operator=(StringBad & sb);

    friend std::ostream & operator<<(std::ostream &os, const StringBad &sb);
};

#endif