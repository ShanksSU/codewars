/*
    https://www.codewars.com/kata/59590976838112bfea0000fa/cpp
*/
#include <vector>
#include <deque>
using namespace std;
std::vector<int> beggars(const std::vector<int>& values, unsigned int n) {
	if (n == 0) return {};
	vector<int> arr(n);
	deque<int> dq(values.begin(), values.end());
	while (!dq.empty()) {
		for (int i = 0; i < n; i++) {
			if (!dq.empty()) {
				arr[i] += dq.front();
				dq.pop_front();
			}
		}
	}
	return arr;
}