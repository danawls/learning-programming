#include "setting_main.h"
#include "Person.h"

Person::Person(string name_param, string user_age, string gender_param)
: full_name(name_param), gender(gender_param), age(user_age)
{
}


const string &Person::getFullName() const {
    return full_name;
}

const string &Person::getAge() const {
    return age;
}

const string &Person::getGender() const {
    return gender;
}
