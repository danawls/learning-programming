#include "std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "file name: " << endl;
    string fname;
    cin >> fname;
    if (!cin)
    {
        cout << "fucked up" << endl;
    }
    ifstream ist(fname);
    if (!ist)
    {
        error("wrong: ", fname);
    }
}