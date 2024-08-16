//
// Created by Woojin Choi on 7/11/24.
//

#include "Matrix.h"
#include "setting.h"

Matrix::Matrix(int first_param, int second_param) : first(first_param), second(second_param){}

Matrix::~Matrix() {
//    cout << "distructing" << endl;
}

void Matrix::add(Matrix add1) {
    this -> first = (this -> first) += add1.first;
    this -> second = (this -> second) += add1.second;
}

