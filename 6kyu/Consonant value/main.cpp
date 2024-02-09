/*
    https://www.codewars.com/kata/59c633e7dcc4053512000073/cpp
*/
#include <string>

int solve(const std::string& s) {
	int max = 0;
	int num = 0;
	std::string vowels = "aeiou";
	for (char c : s) {
		bool isvowels = false;
		for (char word : vowels) {
			if (c == word) {
				isvowels = true;
				num = 0;
				break;
			}
		}
		if (isvowels == false) {
			printf("%c：%d\n", c, (c - 'a' + 1));
			num += (c - 'a' + 1);
			if (num > max) {
				max = num;
			}
		}
	}
	return max;
}