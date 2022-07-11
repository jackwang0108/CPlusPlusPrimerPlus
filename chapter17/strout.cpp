#include <iostream>
#include <string>
#include <sstream>


int main(void){
    using namespace std;

    ostringstream outstr;
    string hdisk;

    cout << "What's the name of your hard disk? ";
    getline(cin, hdisk);

    int cap;
    cout << "What's its capacity in GB? ";
    cin >> cap;

    outstr << "The hard disk " << hdisk << " has the capacity of " << cap << " gigabytes.\n";
    string result = outstr.str();
    cout << result;

    return 0;
}