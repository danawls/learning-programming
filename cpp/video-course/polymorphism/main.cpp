//
// Created by Woojin Choi on 7/11/24.
//
#include "setting.h"
#include "Matrix.h"
#include "Vector.h"

using namespace std;

int main() {
    Matrix Matrix1(12, 24), Matirx2(1245, 23);

    Vector Vector1(12, 12), Vector2(1, 2);

    Matrix * control_key = &Matrix1;
    control_key -> add(Matirx2);

    control_key = &Vector1;
    control_key -> add(Vector2);

    control_key->print_info();




}