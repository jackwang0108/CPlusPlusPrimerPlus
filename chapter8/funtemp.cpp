#include <iostream>

template <typename T>
void Swap(T &a, T &b);


int main(void){
    using namespace std;

    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using complier-generated int swaper: " << endl;
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << endl;


    double x = 24.5, y = 81.7;
    cout << "x, y = " << x << ", " << y << endl;
    cout << "Using complier-generated double swaper: " << endl;
    Swap(x, y);
    cout << "Now x, y = " << x << ", " << y << endl;

    return 0;
}


template <typename T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}