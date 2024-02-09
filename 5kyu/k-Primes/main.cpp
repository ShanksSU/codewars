/*
    https://www.codewars.com/kata/5726f813c8dcebf5ed000a6b/cpp
*/
#include <math.h>
class KPrimes {
public:
    static long long count_primes(long long n) {
        int count = 0;
        for (int i = 2; i * i <= n; i++)
            while (n % i == 0) n /= i, count++;
        if (n != 1) count++;
        return count;
    }
    static std::vector<long long> countKprimes(int k, long long start, long long end) {
        std::vector<long long> ref;
        for (int i = start; i <= end; i++)
            if (count_primes(i) == k) ref.push_back(i);
        return ref;
    }
    static int puzzle(int s) {
        int sum = 0;
        for (int i = 128; i <= s; i++)
            if (count_primes(i) == 7)
                for (int j = 8; j <= s - i - 2; j++)
                    if (count_primes(j) == 3)
                        if (count_primes(s - i - j) == 1) sum++;
        return sum;
    }
};