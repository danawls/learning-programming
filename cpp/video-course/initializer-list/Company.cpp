#include "Company.h"

Company::Company(string name_param, string user_age, string gender_param, string company_param,
                 string job_param, string user_salary)
: Person(name_param, user_age, gender_param), company_name(company_param), job_name(job_param), salary(user_salary)
{}

const string &Company::getCompanyName() const {
    return company_name;
}

const string &Company::getJobName() const {
    return job_name;
}

const string &Company::getSalary() const {
    return salary;
}

