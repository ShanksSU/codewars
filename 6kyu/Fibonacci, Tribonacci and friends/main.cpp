/*
    https://www.codewars.com/kata/556e0fccc392c527f20000c5/cpp
*/
#include <vector>
#include <numeric>
using namespace std;
std::vector<int> xbonacci(std::vector<int> signature, int n) {
    int len = signature.size();
	while (signature.size() < n) {
		signature.emplace_back(std::accumulate(signature.rbegin(), signature.rbegin() + len, 0));
	}
	return { signature.begin(), signature.begin() + n };
}