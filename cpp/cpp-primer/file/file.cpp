
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in("hello.txt");
    ofstream out("by.txt");

    // in.open("hello.txt");

    // if (in.is_open())
    // {
    //     cout << "good" << endl;
    // }
    // else
    // {
    //     return 1;
    // }

    string str;
    int sum = 0;
    while (getline(in, str))
    {
        cout << str << endl;
        sum += stoi(str);
    }

    cout << sum << endl;

    out << sum << endl;

    out.close();
    in.close();
    return 0;
}