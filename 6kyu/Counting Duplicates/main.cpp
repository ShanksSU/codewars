/*
    https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/cpp
*/
#include <algorithm>
#include <string>

using namespace std;
size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* arr) {
	string tmp_string(arr);
	int amax = 0;
	if (tmp_string.empty() || tmp_string == " ") {
		return amax;
	}

	for (char& str : tmp_string) {
		str = toupper(str);
	}

	for (int i = 0; i < size(tmp_string); i++) {
		char x = tmp_string[i];
		int ag = count(tmp_string.begin(), tmp_string.end(), x);
		if (ag > 1) {
			tmp_string.erase(remove(tmp_string.begin(), tmp_string.end(), x), tmp_string.end());
			amax++;
			i = 0;
		}
	}
	return amax;
}