/*
    https://www.codewars.com/kata/55a29405bc7d2efaff00007c/cpp
*/
#include <cmath>
class Suite {
public:
    static double going(int n) {
        double res = 1.;
        for (int i = 2; i < n + 1; i++) {
            res = res / i + 1;
        }
        return round(res * 1000000) / 1000000;
    };
};