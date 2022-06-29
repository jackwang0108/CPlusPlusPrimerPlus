#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main(void){
    cout << "Global warming is " << warming << " degresss.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degresss.\n";
    local();
    cout << "Global warming is " << warming << " degresss.\n";

    return 0;
}