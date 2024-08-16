#include <iostream>
#include <string>
using namespace std;

class one {
public:
    one() = default;
    one(string st_param) : st(st_param){

    }
    ~one() = default;

    virtual void print() {
        cout << st << endl;
    }
private:
    string st = "I'm one";
};

class two : public one{
public:
    two() = default;
    two(string sts_param) : sts(sts_param){

    }
    ~two() = default;

    virtual void print() {
        cout << sts << endl;
    }

private:
    string sts = "I'm two";
};

int main() {
    one one1("one");
    two two2("two");

    one *pt = &one1;

    pt ->print();

    pt = &two2;

    pt -> print();

    return 0;

}
