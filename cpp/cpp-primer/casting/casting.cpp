#include <iostream>

using namespace std;

// void get_double(double d)
// {
//     cout << "It's double" << endl;
// }

// void get_double(int i)
// {
//     cout << "It's int" << endl;
// }

// void get_double(bool n)
// {
//     cout << "It's bool" << endl;
// }

template <typename T>
void get_type(T a)
{
    cout << "It's " << typeid(a).name() << endl;
}

int main()
{
    int ival = 3.14 + 3;
    cout << ival << endl;

    bool b = false, tb = true;
    int i = 32, j = 234, bij = 0;
    double d = 12.32, dj = 1.232;

    get_type(i + d);
    get_type(i + b);
    get_type(b);
    get_type(tb - bij);

    // Name cast

    // static
    double slope = static_cast<double>(j) / i;
    cout << slope << endl;
    get_type(slope);

    // const
    const char *jc = "hello";
    char *k = const_cast<char *>(jc);
    get_type(k);

    return 0;
}