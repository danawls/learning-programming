//
// Created by Woojin Choi on 6/2/24.
//

#ifndef INITIALIZER_LIST_PERSON_H
#define INITIALIZER_LIST_PERSON_H
#include "setting_main.h"

class Person {
public:
    Person() = default;
    Person(string name_param, string user_age, string gender_param);
    ~Person() = default;

public:
    const string &getFullName() const;

    const string &getAge() const;

    const string &getGender() const;

private:
    string full_name;
    string age;
    string gender;
};


#endif //INITIALIZER_LIST_PERSON_H
