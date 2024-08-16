#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect = {3, 4, 25, 2, 6, 3, 3, 3, 17};
    auto res = find(vect.cbegin(), vect.cend(), 2);
    cout << *res << endl
         << endl;
    sort(vect.begin(), vect.end(), [](int a, int b)
         { return a > b; });
    for (int a : vect)
    {
        cout << a << endl;
    }
    return 0;
}