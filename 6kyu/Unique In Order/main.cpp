/*
    https://www.codewars.com/kata/54e6533c92449cc251001667/cpp
*/
#include <string>
#include <vector>
using namespace std;

template <typename T> 
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
	std::vector<T> arr;
	for (const auto& chr : iterable) {
		if (arr.empty() || chr != arr.back()) {
			arr.push_back(chr);
		}
	}
	return arr;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
	std::vector<char> arr;
	for (auto& chr : iterable) {
		if (arr.empty() || chr != arr.back()) {
			arr.push_back(chr);
		}
	}
	return arr;
}