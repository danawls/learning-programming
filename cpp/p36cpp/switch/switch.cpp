#include "std_lib_facilities.h"
#include "c_cpp.h"

#define test 1

int main()
{
    cout << get_c_cpp() << endl;
    int i;
    cin >> i;

    switch (i)
    {
    case test:
        cout << "1" << endl;
        break;
    case 2:
        cout << "2" << endl;
        break;
    case 3:
        cout << "3" << endl;
        break;
    default:
        cout << "wrong" << endl;
        return 1;
    }

    return 0;
}