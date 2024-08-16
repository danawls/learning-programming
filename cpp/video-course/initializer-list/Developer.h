

#ifndef INITIALIZER_LIST_DEVELOPER_H
#define INITIALIZER_LIST_DEVELOPER_H
#include "Company.h"

class Developer : public Company{
public:
    Developer() = default;
    Developer(const Developer &ref);
    Developer(string name_param, string user_age, string gender_param, string company_param, string job_param, string salary, string m_tech_param, string f_tech_param, string w_tech_param);
    ~Developer() = default;

public:
    //Getters
    void get_user_info();

private:
    string major_tech;
    string favorite_tech;
    string wanna_learn_tech;
};


#endif //INITIALIZER_LIST_DEVELOPER_H
