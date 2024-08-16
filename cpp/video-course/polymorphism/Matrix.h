//
// Created by Woojin Choi on 7/11/24.
//

#ifndef POLYMORPHISM_MATRIX_H
#define POLYMORPHISM_MATRIX_H

#include "setting.h"


class Matrix {
public:
    Matrix() = default;
    Matrix(int first_param, int second_param);
    ~Matrix();

    virtual void add(Matrix add1);

    void print_info() {
        cout << "first is " << this -> first << "second is" << this -> second << endl;
    }

private:
    int first;
    int second;

};


#endif //POLYMORPHISM_MATRIX_H
