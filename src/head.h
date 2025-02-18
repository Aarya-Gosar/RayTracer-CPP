#ifndef HEAD_H
#define HEAD_H

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>

using namespace std;
// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers
#include "interval.h"

#include "color.h"
#include "ray.h"
#include "vec3.h"



#endif