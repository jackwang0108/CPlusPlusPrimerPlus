#include <iostream>
#include "stacktp.h"

template <template <typename T> class TemplateClass>
class Crab{
private:
    TemplateClass<int> s1;
    TemplateClass<double> s2;

public:
    Crab() {};
    bool push(int a, double b) {return s1.push(a) && s2.push(b);}
    bool pop(int &a, double &b) {return s1.pop(a) && s2.pop(b);}
};


int main(void){
    using std::cout;
    using std::cin;
    using std::endl;

    Crab<Stack> nebula;

    int ni;
    double nb;

    cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):\n";
    while (cin >> ni >> nb && ni > 0 && nb > 0)
        if (!nebula.push(ni, nb))
            break;
    
    while (nebula.pop(ni, nb))
        cout << ni << ", " << nb << endl;
    
    cout << "Done.\n";

    return 0;
}