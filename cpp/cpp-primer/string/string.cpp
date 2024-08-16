#include <iostream>
#include <ios>

using namespace std;

int main()
{
    string s1;
    string s2 = s1;
    string s3 = "hiya";
    string s4(10, 'c');

    // opreations
    getline(cin, s1);
    if (s2.empty())
    {
        cout << "s2 is empty" << endl;
    }

    // while (getline(cin, s2))
    // {
    //     cout << s2 << endl;
    //     printf("%s\n", s2.c_str());
    // }

    string s("Hello World!!!,,,,,_+_+_");
    // punct_cnt has the same type that s.size returns; see § 2.5.3 (p. 70)
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
    {                    // for every char in s
        if (ispunct(c))  // if the character is punctuation
            ++punct_cnt; // increment the punctuation counter
        cout << isalnum(c) << isalpha(c) << iscntrl(c) << isdigit(c) << endl;
    }
    cout << punct_cnt
         << " punctuation characters in " << s << endl;

    return 0;
}