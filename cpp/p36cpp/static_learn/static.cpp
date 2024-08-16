#include <iostream>
#include <string>

using namespace std;

void static_test_()
{
    static char ch = 'a';
    static int ch_num = 0;
    if (ch_num <= 24)
    {
        cout << ++ch << endl;
        ++ch_num;
    }
    else
    {
        cerr << "It's done" << endl;
        exit(0);
    }
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "start")
        {
            static_test_();
        }
        else if (s == "exit")
        {
            return 0;
        }
        else
        {
            cerr << "wrong command" << endl;
        }
    }
    return 0;
}