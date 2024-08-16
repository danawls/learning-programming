//
// Created by Woojin Choi on 7/11/24.
//

#include "Vector.h"
#include "setting.h"

Vector::Vector(int first_param, int second_param) : first(first_param), second(second_param) {}

Vector::~Vector() {
//    cout << "vector dis" << endl;
}

void Vector::add(Vector to_add_vector) {
    this -> first = (this -> first) += to_add_vector.first;
    this -> second = (this -> second) += to_add_vector.second;
}