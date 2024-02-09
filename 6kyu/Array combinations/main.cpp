/*
    https://www.codewars.com/kata/59e66e48fc3c499ec5000103/cpp
*/
#include <vector>
#include <set>
int solve(const std::vector<std::vector<int>>& data) {
	int sum = 1;
	for (auto m : data) {
		std::set<int> arr(m.begin(), m.end());
		sum *= arr.size();
	}
	return sum;
}