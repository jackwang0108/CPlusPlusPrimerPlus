#include <iostream>

using namespace std;


int main(void){
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    return 0;
}