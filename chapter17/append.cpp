#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

const char *file = "guests.txt";

int main(void)
{
    using namespace std;

    char ch;
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << " file:\n";
        while (fin.get(ch))
            if (ch == ' ')
                cout << endl;
            else
                cout << ch;
        if (fin.eof())
            cout << endl;
        fin.close();
    }

    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter guests names (enter a blank line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
        fout << name;
    fout.close();

    fin.clear();
    fin.open(file);
    if (!fin.is_open())
    {
        cout << "Here are the new contents of the " << file << " file:\n";
        while (fin.get(ch))
            cout << ch;
        fin.close();
    }

    cout << "Done.\n";

    return 0;
}