#include "main.h"

long int ten (int b)
{
    auto func = [](int a) -> long int {
        long int ten_to_ten = a;
        for(int i = 1; i < 10; ++i)
        {
            ten_to_ten *= a;
        }
        return ten_to_ten;
    };
    return func(b);
}