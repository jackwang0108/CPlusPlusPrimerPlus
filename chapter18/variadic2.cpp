#include <iostream>
#include <string>

void show_list3() {}

template <typename T>
void show_list3(const T &value) {
    std::cout << value << '\n';
}

template <typename T, typename... Args>
void show_list3(const T &value, const Args&... args){
    std::cout << value << ", ";
    show_list3(args...);
}


int main(void){
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    show_list3(n, x);
    show_list3(x * x, '!', 7, mr);

    return 0;
}