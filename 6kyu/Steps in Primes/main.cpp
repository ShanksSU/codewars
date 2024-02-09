/*
    https://www.codewars.com/kata/5613d06cee1e7da6d5000055/cpp
*/
#include <math.h>
class StepInPrimes {
public:
    static bool isPrime(int n) {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0) return false;
        return true;
    }

    static std::pair <long long, long long> step(int r, int s, int e) {
        for (int i = s; i < e; i++) {
            if (isPrime(i) && isPrime(i + r)) return { i, i + r };
        }
        return { 0, 0 };
    }
};