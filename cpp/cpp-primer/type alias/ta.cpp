#include <iostream>
#include <string>

using namespace std;

typedef int *IP, I;
typedef string STR;

class King
{
public:
    King() = default;
    King(STR name_param, I age_param);
    ~King();

    STR get_name()
    {
        return this->name;
    }

    I get_age()
    {
        return *age;
    }

private:
    STR name;
    IP age;
};

using K = King;

K::King(STR name_param, I age_param)
{
    this->name = name_param;
    age = new int(sizeof(int));
    *age = age_param;
}

K::~King()
{
    delete age;
}

int main()
{
    I user_i;
    STR user_string;
    cin >> user_i;
    cin >> user_string;
    King first_king(user_string, user_i);
    cout << first_king.get_age() << " " << first_king.get_name() << endl;

    return 0;
}