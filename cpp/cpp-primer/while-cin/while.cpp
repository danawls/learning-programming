#include <iostream>

using namespace std;

int main()
{
    int sum = 0, val = 0;
    while (cin >> val)
    {
        sum += val; // this while statement will be closed after take EOF.
    }
    cout << sum << endl;
    return 0;
}