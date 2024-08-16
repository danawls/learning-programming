#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        if (word == "list")
        {
            for (auto iter1 = word_count.begin(); iter1 != word_count.end(); ++iter1)
            {
                cout << iter1->first << "\t" << iter1->second << endl;
            }
        }
        else if (word == "find")
        {
            string keys;
            cout << ": ";
            cin >> keys;
            auto found = word_count.find(keys);
            if (found != word_count.end())
            {
                cout << found->first << "\t" << found->second << endl;
            }
            else
            {
                cerr << ": Can't find it" << endl;
            }
        }
        else if (word == "add")
        {
            cout << ": ";
            string toadd;
            cin >> toadd;
            auto toadd_found = word_count.find(toadd);
            if (toadd_found != word_count.end())
            {
                cerr << ": Already is" << endl;
            }
            else
            {
                word_count.insert({toadd, size(toadd)});
            }
        }
        else if (word == "erase")
        {
            cout << ": ";
            string toerase;
            cin >> toerase;
            auto toerase_found = word_count.find(toerase);
            if (toerase_found != word_count.end())
            {
                word_count.erase(toerase);
            }
            else
            {
                cerr << ": Can't erase it because it isn't" << endl;
            }
        }
        else if (word == "exit")
        {
            return 0;
        }
        else
        {
            cerr << "Invalid command" << endl;
        }
    }
    return 0;
}