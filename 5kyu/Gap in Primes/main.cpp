/*
    https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4/cpp
*/
#include <math.h>

class GapInPrimes {
public:
    static bool prims(long long n, long long n2) {
        for (int i = 2; i <= n2/2; i++)
            if (n % i == 0 || n2 % i == 0) return false;
        return true;
    }
    static bool prims(long long n) {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0) return false;
        return true;
    }
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
        for (long long i = m; i < n - g - 1; i++) {
            bool isP = true;
            if (prims(i, i + g)) {
                for (long long j = i + 1; j < i + g - 1; j++) {
                    if (prims(j)) {
                        isP = false;
                        break;
                    }
                }
                if (isP) return { i, i + g };
            }
        }
        return { 0, 0 };
    }
};