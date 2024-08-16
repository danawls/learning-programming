#include "main.h"

int main()
{

    cout << [](double a, double b)
    {
        return (a + b);
    }(5.1, 26.3)
         << endl;
    cout << sum(1, 2) << endl;
    cout << getMinus(5, 4) << endl;
    cout << ten(10) << endl;
    long int ten_val = ten(10);
    capture(&ten_val);
    cout << ten_val << endl;
    return 0;
}
