#include "std_lib_facilities.h"
#include "user_custom.h"

int main()
{
    // declare int vector
    vector<int> int_v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<string> string_v = {"woojin", "nam", "san", "dayul", "seojun"};

    string k;

    while (cin >> k)
    {
        if (k == "exit")
        {
            break;
        }
        else
        {
            try
            {
                int_v.push_back(stoi(k));
            }
            catch (const std::exception &e)
            {
                cerr << e.what() << '\n';
            }
        }
        // cout << "--------------------------------------" << endl;
        set_colum('-', 65);
        for (int i : int_v)
        {
            try
            {
                cout << i << endl;
            }
            catch (const exception &e)
            {
                cerr << e.what() << endl;
            }
        }
        // cout << "--------------------------------------" << endl;
        set_colum('-', 65);
    }

    // try
    // {
    //     int test_try = 1;
    //     throw test_try;
    // }
    // catch (int test_try)
    // {
    //     cerr << test_try << '\n';
    // }

    return 0;
}
