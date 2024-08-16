#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

using namespace  std;

template <typename T> T get_sum (T a, T b);
template<> const char *get_sum<const char *>(const char *a, const char *b);

int main() {
    int a = 5;
    int b = 7;
    double f = 2.3;
    double d = 5.6;
    const char *s = "Choi";
    const char *g = "Woojin";
    string last_name = "Woojin";
    string first_name = "Choi";
    cout << setw(10) << left << "The Templete Test" << endl;
    cout << setw(10) << left << "int" << setw(10) << left << "double" << setw(10) << left << "string" << setw(10) << left << "const char *" << endl;
    cout << setw(10) << left << get_sum(a, b) << setw(10) << left << get_sum(f, d) << setw(10) << left << get_sum(first_name, last_name)  << setw(10) << left << get_sum(s, g) << endl;
    return 0;
}

template <typename T> T get_sum (T a, T b)
{
return (a > b) ? a : b;
}

template<> const char *get_sum<const char *>(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b;
}