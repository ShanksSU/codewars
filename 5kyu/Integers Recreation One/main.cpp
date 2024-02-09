/*
    https://www.codewars.com/kata/55aa075506463dac6600010d/cpp
*/
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

class SumSquaredDivisors {
public:
	static vector<pair<long long, long long>> listSquared(long long m, long long n) {
		vector<pair<long long, long long>> arr;
		for (long long i = m; i <= n; i++) {
			vector<long long> vec;
			for (long long j = 1; j <= i; j++) {
				if (i % j == 0) {
					vec.push_back(pow(j, 2));
				}
			}
			long long vec_sum = accumulate(vec.begin(), vec.end(), 0);
			if (sqrt(vec_sum) == (int)sqrt(vec_sum)) {
				arr.emplace_back(i, vec_sum);
			}
		}
		return arr;
	};
};