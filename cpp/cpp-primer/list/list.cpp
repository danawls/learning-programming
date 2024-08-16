#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;
typedef list<int> listi;

int main()
{
    listi lt1;
    for (int i = 2; i <= 100; i += 2)
    {
        lt1.push_back(i);
    }

    for (int a : lt1)
    {
        cout << a << endl;
    }

    return 0;
}