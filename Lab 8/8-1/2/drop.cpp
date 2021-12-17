#include "drop.h"
#include <cmath>

Planet::Planet(float gravity) { _gravity = gravity; }

float Planet::drop(float height) {
    float gravity = this->_gravity;
    float res = 2 * height;
    res /= gravity;
    return sqrt(res);
}

Earth::Earth() : Planet(9.81) {} 

void Earth::simulate(float height) {
    float time = drop(height);
    cout << "Earth gravity = " << this->_gravity << endl;
    cout << "Drop from " << height << "m, " << time << " seconds." << endl;
}

Moon::Moon() : Planet(1.62) {}

void Moon::simulate(float height) {
    float time = drop(height);
    cout << "Moon gravity = " << this->_gravity << endl;
    cout << "Drop from " << height << "m, " << time << " seconds." << endl;
}