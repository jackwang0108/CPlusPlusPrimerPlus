#include <cstring>
#include "strngbad1.h"

using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::StringBad(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::StringBad(StringBad & sb){
    num_strings++;
    len = sb.len;
    str = new char[len + 1];
    std::strcpy(str, sb.str);
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::~StringBad()
{
    --num_strings;
    cout << "\"" << str << "\" object deleted, " << num_strings << " left\n";
    delete[] str;
}

StringBad & StringBad::operator=(StringBad &sb){
    if (this == &sb)
        return *this;
    delete [] str;
    len = sb.len;
    str = new char[len + 1];
    std::strcpy(str, sb.str);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const StringBad &sb)
{
    os << sb.str;
    return os;
}