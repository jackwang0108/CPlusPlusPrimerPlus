#ifndef STRING1_H
#define STRING1_H

#include <iostream>

using std::istream;
using std::ostream;

class String
{
private:
    char *str;
    int len;
    static int num_string;
    static const int CINLIM = 80;

public:
    String();
    String(const char *s);
    String(const String &st);
    ~String();

    // inline
    inline int length() { return len; }

    // operator
    String &operator=(const char *s);
    String &operator=(const String &st);
    char &operator[](int n);
    const char &operator[](int n) const;

    // friend operator
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend ostream &operator<<(ostream &os, const String &st);
    friend istream &operator>>(istream &is, String &st);

    // static
    static int HowMany();
};

#endif