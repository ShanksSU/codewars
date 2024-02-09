/*
    https://www.codewars.com/kata/52ec24228a515e620b0005ef/cpp
*/
using ull = unsigned long long;
ull exp_sum(unsigned int n) {
    const int len = 2000;
	long num[len + 1] = { 1 };
	for (int i = 1; i <= n; ++i)
		for (int j = i; j <= n; ++j)
			num[j] += num[j - i];
  return num[n];
}