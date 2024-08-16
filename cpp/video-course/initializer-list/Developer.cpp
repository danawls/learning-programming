#include "Developer.h"

Developer::Developer(string name_param, string user_age, string gender_param, string company_param,
                     string job_param, string user_salary, string m_tech_param, string f_tech_param,
                     string w_tech_param)
    : Company(name_param, user_age, gender_param, company_param, job_param, user_salary), major_tech(m_tech_param), favorite_tech(f_tech_param), wanna_learn_tech(w_tech_param)
{
}

Developer::Developer(const Developer &ref)
    : Company(ref), major_tech(ref.major_tech), favorite_tech(ref.favorite_tech), wanna_learn_tech(ref.wanna_learn_tech)
{
}

void Developer::get_user_info()
{
    cout << getFullName() << "'s information" << endl;
    cout << left << setw(col) << "name" << left << setw(col) << "age" << left << setw(col) << "gender" << left << setw(col) << "company" << left << setw(col)
         << "job" << left << setw(col) << "salary" << left << setw(col) << "major tech" << left << setw(col) << "favorite tech" << left << setw(col)
         << "wanna learn tech" << endl;
    cout << left << setw(col) << getFullName() << left << setw(col) << getAge() << left << setw(col) << getGender() << left << setw(col)
         << left << setw(col) << getCompanyName() << left << setw(col) << getJobName() << left << setw(col) << getSalary() << left << setw(col)
         << left << setw(col) << this->major_tech << left << setw(col) << this->favorite_tech << left << setw(col) << this->wanna_learn_tech
         << endl;
}
