#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <deque>

using namespace std;

int N;
vector<int> U, D;
deque<string> answers;

string_view up = "+";
string_view down = "-";
string_view keeping = "0";

// Optimized recursive function
void f(int cnt = 0, long long money = 0, string s = "")
{
    if (cnt == N)
    {
        if (money >= 0)
        {
            answers.emplace_back(move(s));
            return;
        }
    }

    // Use move semantics and append string_view converted to string
    if (U[cnt] != -1)
    {
        f(cnt + 1, money - U[cnt], s + string(up));
    }

    f(cnt + 1, money, s + string(keeping));

    if (D[cnt] != -1)
    {
        f(cnt + 1, money + D[cnt], s + string(down));
    }
}

int main()
{
    cin >> N;
    U.resize(N);
    D.resize(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> U[i];
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> D[i];
    }

    // Initial call: cnt=0, money=0, empty string
    f();

    cout << answers.front() << endl; // Access the first element without sorting to save memory
    return 0;
}