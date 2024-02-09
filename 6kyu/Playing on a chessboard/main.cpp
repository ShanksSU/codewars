/*
    https://www.codewars.com/kata/55ab4f980f2d576c070000f4/cpp
*/
#include <cmath>
using namespace std;

using ull = unsigned long long;
class Suite2 {
public:
    static string game(ull n) {
        double a = n * n;
        if (n % 2) return "[" + to_string(ull(round(a))) + ", 2]";
        return "[" + to_string(ull(round(a / 2.))) + "]";
    };
};