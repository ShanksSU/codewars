/*
    https://www.codewars.com/kata/566be96bb3174e155300001b/cpp
*/
#include <cmath>

class Ball {
public:
    static int maxBall(int v0) {
        return static_cast<int>(std::round(static_cast<double>(v0 / 3.6) / 0.981));
    }
};