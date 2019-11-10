#pragma once

#include <string>
#include <vector>
#include <utility>
#include "../../lib/point.h"

namespace numath {
    namespace interpolation {


        /**
         * Calculates the polynomial that passes through each 
         * given point using a cubic spline.
         * 
         * @param points points to calculate the polynomial.
         */
        std::pair<std::vector<std::vector<double>>, std::vector<double>> cubicSpline(std::vector<numath::Point> &points);

    }
}