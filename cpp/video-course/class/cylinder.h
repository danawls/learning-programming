#ifndef CLASS_CYLINDER_H
#define CLASS_CYLINDER_H

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265359;

class Cylinder {
public:
    Cylinder() = default;
    ~Cylinder();

//    template<typename T>
//    Cylinder(T radius, T h)
//    {
//        base_radius = radius;
//        height = h;
//    }

    double volume_of_cy()
    {
        return PI * (*base_radius) * (*base_radius) * (*height);
    }

    //setters
    void set_values()
    {
        base_radius = new double;
        height = new double;
        cout << "Enter the base radius" << endl;
        cin >> *base_radius;
        cout << "Enter the height" << endl;
        cin >> *height;
    }

    //getters
    double get_base_radius()
    {
        return *base_radius;
    }

    double get_height()
    {
        return *height;
    }



private:
    double *base_radius = nullptr;
    double *height = nullptr;
};

Cylinder::~Cylinder() {
    cout << "this cylinder has been destructed" << endl;
    delete base_radius;
    delete height;
}


#endif //CLASS_CYLINDER_H
