//
// Created by Woojin Choi on 6/2/24.
//

#ifndef INITIALIZER_LIST_COMPANY_H
#define INITIALIZER_LIST_COMPANY_H
#include "Person.h"

class Company : public Person{
public:
    Company() = default;
    Company(string name_param, string user_age, string gender_param, string company_param, string job_param, string user_salary);
    ~Company() = default;

public:
    //Getters
    const string &getCompanyName() const;

    const string &getJobName() const;

    const string &getSalary() const;

private:
    string company_name;
    string job_name;
    string salary;
};


#endif //INITIALIZER_LIST_COMPANY_H
