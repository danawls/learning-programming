#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> i = {1, 2, 3};

    auto a = i.begin();
    auto b = i.end();

    *a = 2;

    for (auto ia = a; ia != b; ++ia)
    {
        cout << *ia << endl;
    }

    return 0;
}