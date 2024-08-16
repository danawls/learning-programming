#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Person{
public:
    Person() = default;

    //Setters
    void set_first() {
        cout << "Enter First name: ";
        cin >> this -> first_name;
    }

    void set_last() {
        cout << "Enter Last Name: ";
        cin >> this -> last_name;
    }

    //getters
    string get_first(){
        return first_name;
    }
    string get_last() {
        return last_name;
    }

private:
    string first_name;
    string last_name;
};

class Player : public Person{
public:
    Player() = default;
    Player(string_view name_param, int age_param, int level_param);
    ~Player();

    //Setters
    void set_name() {
        set_first();
        set_last();
        this -> name = get_first() + get_last();
    }

    void set_age() {
        cout << "age: ";
        cin >> *age;
    }

    void set_level() {
        cout << "level: ";
        cin >> *level;
    }

    //getters

    void get_age() {
        cout << "age: " << *age << endl;
    }

    void get_level() {
        cout << "level: " << *level << endl;
    }

    void print_info() {
        cout << "name: " << this -> name << " age: " << *age << " level: " << *level << endl;
    }

private:
    string name;
    int *age = nullptr;
    int *level =  nullptr;
};

Player::Player(string_view name_param, int age_param, int level_param) {
    name = name_param;
    age = new int;
    *age = age_param;
    level = new int;
    *level = level_param;
}

Player::~Player() {
    delete age;
    delete level;
    cout << "Destructed at: " << this << endl;
}

int main() {
    Player player1("Woojin", 15, 102);
    player1.print_info();
    player1.set_name();
    player1.set_age();
    player1.set_level();
    player1.print_info();
    return 0;
}
