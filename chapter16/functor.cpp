#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

template <typename T>
class TooBig{
private:
    T cutoff;

public:
    TooBig(const T &t) {cutoff = t;}
    bool operator()(const T &v) { return v > cutoff;}
};


void outint(int n) {std::cout << n << " ";}


int main(void){
    using std::list;
    using std::cout;
    using std::endl;

    TooBig<int> f100(100);
    
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

    list<int> yadayada(vals, vals + 10);
    list<int> etcetcra(vals, vals + 10);

    cout << "Original lists:\n";
    std::for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    std::for_each(etcetcra.begin(), etcetcra.end(), outint);
    cout << endl;

    yadayada.remove_if(f100);
    etcetcra.remove_if(TooBig<int>(200));

    cout << "Trimmed lists:\n";
    std::for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    std::for_each(etcetcra.begin(), etcetcra.end(), outint);
    cout << endl;

    return 0;
}

