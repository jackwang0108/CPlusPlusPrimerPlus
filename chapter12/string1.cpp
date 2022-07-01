#include <cstring>
#include "string1.h"

using std::cin;
using std::cout;

int String::num_string = 0;

// constructors
String::String()
{
    len = 0;
    str = new char[1];
    str = 0;
    num_string++;
}

String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_string++;
}

String::String(const String &st)
{
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    num_string++;
}

String::~String()
{
    --num_string;
    delete[] str;
}

String &String::operator=(const char *s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String &String::operator=(const String &st)
{
    if (this == &st)
        return *this;
    len = st.len;
    delete[] str;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

char &String::operator[](int n)
{
    return str[n];
}

const char &String::operator[](int n) const
{
    return str[n];
}

bool operator<(const String &st1, const String &st2)
{
    return bool(std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return bool(std::strcmp(st2.str, st1.str) < 0);
}

bool operator==(const String &st1, const String &st2)
{
    return bool(std::strcmp(st1.str, st2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    ;

    return is;
}

int String::HowMany()
{
    return num_string;
}