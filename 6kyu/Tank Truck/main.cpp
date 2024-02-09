/*
    https://www.codewars.com/kata/55f3da49e83ca1ddae0000ad/cpp
*/
#include<cmath>
class VolTank {
public:
    static int tankVol(int h, int d, int vt) {
        double pi = acos(-1);
        double length = (double)(4 * vt) / (d * d * pi);
        double v = 0;

        // two situations
        if (2 * h <= d) {
            double theta = acos((double)(d - 2 * h) / d);
            double smax = 0.25 * d * d * theta;
            double smin = 0.125 * d * d * sin(2 * theta);
            v = (smax - smin) * length;
        }
        else { // 2*h > d
            double theta = acos((double)(2 * h - d) / d);
            double smax = 0.25 * d * d * theta;
            double smin = 0.125 * d * d * sin(2 * theta);
            v = vt - (smax - smin) * length;
        }

        int ans = int(v);
        return (ans);
    }
};