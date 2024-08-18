#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
vector<int> U, D;
vector<string> answers;

string up = "+";
string down = "-";
string keeping = "0";

// // 문자열 비교 함수
// bool cmp(const string &a, const string &b)
// {
//     for (int i = 0; i < max(a.size(), b.size()); i++)
//     {
//         char char_a = (i < a.size()) ? a[i] : '\0';
//         char char_b = (i < b.size()) ? b[i] : '\0';

//         if (char_a == '+' && (char_b == '0' || char_b == '-'))
//             return true;
//         if (char_b == '+' && (char_a == '0' || char_a == '-'))
//             return false;
//         if (char_a == '0' && char_b == '-')
//             return true;
//         if (char_b == '0' && char_a == '-')
//             return false;
//     }
//     return false; // 만약 비교할 수 없다면, a가 b보다 크지 않다고 가정
// }

// 재귀 함수
void f(int cnt = 0, long long money = 0, string s = "")
{
    if (cnt == N)
    {
        if (money >= 0)
        {
            answers.push_back(s);
            return;
        }
    }

    // 업그레이드 시도
    if (U[cnt] != -1)
    {
        f(cnt + 1, money - U[cnt], s + up);
    }

    // 유지 시도
    f(cnt + 1, money, s + keeping);

    // 다운그레이드 시도
    if (D[cnt] != -1)
    {
        f(cnt + 1, money + D[cnt], s + down);
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

    // 초기 호출: cnt=0, money=0, 빈 문자열
    f();
    // sort(answers.begin(), answers.end(), cmp);
    // for (auto answer : answers)
    // {
    //     cout << answer << '\n';
    cout << answers[0] << endl;
    return 0;
}
