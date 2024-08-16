#ifndef user_cus123
#define user_cus123

#include "std_lib_facilities.h"

template <typename T>
void set_colum(T setting_val, int repeat_time)
{
    for (int i = 0; i < repeat_time; ++i)
    {
        cout << setting_val;
    }
    cout << endl;
}

#endif