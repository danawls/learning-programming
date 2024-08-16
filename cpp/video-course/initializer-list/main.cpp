#include "Developer.h"

int main() {
    string entered_name;
    string entered_age;
    string entered_gender;
    string entered_company;
    string entered_job;
    string entered_salary;
    string entered_m_tech;
    string entered_f_tech;
    string entered_w_tech;

    cout << "Full Name: ";
    getline(cin, entered_name);
    cout << "Age: ";
    getline(cin, entered_age);
    cout << "Gender: ";
    getline(cin, entered_gender);
    cout << "Company: ";
    getline(cin, entered_company);
    cout << "Job: ";
    getline(cin, entered_job);
    cout << "Salary: ";
    getline(cin, entered_salary);
    cout << "Your Major Technology: ";
    getline(cin, entered_m_tech);
    cout << "Your Favorite Technology: ";
    getline(cin, entered_f_tech);
    cout << "The Technology That You Wanna Learn: ";
    getline(cin, entered_w_tech);

    Developer woojin(entered_name, entered_age, entered_gender, entered_company, entered_job, entered_salary, entered_m_tech, entered_f_tech, entered_w_tech);
    woojin.get_user_info();

    Developer copy_thing(woojin);
    copy_thing.get_user_info();
    return 0;
}
