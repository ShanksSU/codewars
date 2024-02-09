/*
    https://www.codewars.com/kata/56efab15740d301ab40002ee/cpp
*/
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Operarray {
public:
    static long long gcdi(long long x, long long y) { return gcd(x, y); }
    static long long lcmu(long long a, long long b) { return lcm(abs(a), abs(b)); }
    static long long som(long long a, long long b) { return a + b; }
    static long long maxi(long long a, long long b) { return max(a, b); }
    static long long mini(long long a, long long b) { return min(a, b); }

    static std::vector<long long> operArray(long long (*func1)(long long, long long), const std::vector<long long>& arr, long long init) {
        std::vector<long long> ref;
        ref.reserve(arr.size()); // Reserve space to avoid reallocation
        long long result = init;
        for (const auto& elem : arr) {
            result = func1(result, elem);
            ref.push_back(result);
        }
        return ref;
    }
};