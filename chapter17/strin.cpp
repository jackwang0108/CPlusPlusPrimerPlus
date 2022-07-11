#include <iostream>
#include <string>
#include <sstream>


int main(void){
    using namespace std;

    string lit = "It was a dark and stromy day, and "
        " the full moon glowed brilliantly.";

    istringstream instr(lit);

    string word;
    while (instr >> word)
        cout << word << endl;

    return 0;
}