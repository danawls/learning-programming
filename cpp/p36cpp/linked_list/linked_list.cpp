#include "std_lib_facilities.h"

struct Nuts_num
{
    int value;
    string name_value;
    Nuts_num *prev;
    Nuts_num *next;
    Nuts_num(int value_param, string name, Nuts_num *p = nullptr, Nuts_num *n = nullptr) : value(value_param), prev(p), next(n), name_value(name) {}
};

int main()
{
    Nuts_num *nuts = new Nuts_num(1, "Woojin");
    nuts = new Nuts_num(2, "junwoo", nullptr, nuts);
    nuts->next->prev = nuts;
    nuts = new Nuts_num(3, "San", nullptr, nuts);
    nuts->next->prev = nuts;

    cout << nuts->next->prev->next->prev->name_value << endl;
}