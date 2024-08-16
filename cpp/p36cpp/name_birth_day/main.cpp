#include "std_lib_facilities.h"

int main() {
    //declare first and last name
    string first;
    string last;

    //declare age
    int age;

    //get the name
    cout << "Enter your name" << endl;
    cin >> first >> last;

    //get the age
    cout << "Enter you age" << endl;
    cin >> age;

    //combine first and last name to full name
    string full_name = first + " " + last;

    //print user's info
    cout << left << setw(50) << "name" << left << setw(50) << "age" << endl;
    cout << left << setw(50) << full_name << left << setw(50) << age * 12 << endl;
    return 0;
}
