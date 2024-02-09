/*
    https://www.codewars.com/kata/554a44516729e4d80b000012/cpp
*/
#include <vector>
#include <math.h>
using namespace std;
class BuyCar {
public:
    static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
        if (startPriceOld >= startPriceNew) return { 0, startPriceOld - startPriceNew };
        int m = 1, s = savingperMonth, M = savingperMonth;
        double p = 0;
        double O = startPriceOld;
        double N = startPriceNew;
        percentLossByMonth = percentLossByMonth * 0.01;
        while (p <= 0) {
            O = O - (O * percentLossByMonth);
            N = N - (N * percentLossByMonth);
            M = s * m;
            if (m % 2 == 1) percentLossByMonth += 0.005;
            p = O - N + M;
            m++;
        }
        int ans = round(p);
        return { m - 1, ans };
    };
};