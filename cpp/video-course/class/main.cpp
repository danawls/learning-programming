#include "cylinder.h"

int main() {
    Cylinder cylinder1;
    cylinder1.set_values();
    cout << cylinder1.get_base_radius() << setw(10) << cylinder1.get_height() << endl;
    cout << cylinder1.volume_of_cy() << endl;
    return 0;
}
