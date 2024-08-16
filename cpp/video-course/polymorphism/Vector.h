//
// Created by Woojin Choi on 7/11/24.
//

#ifndef POLYMORPHISM_VECTOR_H
#define POLYMORPHISM_VECTOR_H

#include "setting.h"
#include "Matrix.h"


class Vector : public Matrix{
public:
    Vector() = default;
    Vector(int first_param, int second_param);
    ~Vector();

    virtual void add(Vector to_add_vector);

    void print_info() {
        cout << "first_vector" << this -> first << "second" << second;
    }

private:
    int first;
    int second;
};


#endif //POLYMORPHISM_VECTOR_H
