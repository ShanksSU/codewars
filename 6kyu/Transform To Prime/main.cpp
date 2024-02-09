/*
    https://www.codewars.com/kata/5a946d9fba1bb5135100007c/cpp
*/
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int minimumNumber(const vector<int>& numbers) {
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    for (int i = 0; ; ++i) {
        if (isPrime(sum + i)) return i;
    }
}