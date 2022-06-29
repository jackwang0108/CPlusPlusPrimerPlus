#include <iostream>

extern double warming;

void update(double dt);
void local();


using std::cout;
void update(double dt){
    // 外面声明了，这里声明不声明无所谓
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local(){
    double warming = 0.8;

    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees.\n";
}