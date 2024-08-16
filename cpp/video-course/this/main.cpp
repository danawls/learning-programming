#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    Dog() = default;
    Dog(string name_param, string breed_param, int age_param);
    ~Dog();

    //Getters
    void print_info() {
        cout << "name: " << name << " breed: " << breed << " age: " << *age << endl;
    }

    //Setters
    void set_dog_name(string name) {
        this -> name = name;
    }

private:
    string name;
    string breed;
    int *age = nullptr;
};

Dog::Dog(string name_param, string breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    age = new int;
    *age = age_param;
    cout << "constructed name " << name << " at " << this << endl;
}

Dog::~Dog() {
    delete age;
    cout << "Destructed name " << name << " at " << this << endl;
}

int main() {
    Dog dog1("king", "bulldog", 3);
    dog1.set_dog_name("Woojin");
    dog1.print_info();
    cout << "size of dog1 is: " << sizeof(dog1) << endl;
    return 0;
}
