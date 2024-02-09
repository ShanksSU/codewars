/*
    https://www.codewars.com/kata/5324945e2ece5e1f32000370/cpp
*/
#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
	int len1 = a.size() - 1;
	int len2 = b.size() - 1;
	int carry = 0;
	std::string str = "";
	while (len1 >= 0 || len2 >= 0 || carry) {
		int x = len1 >= 0 ? a[len1] - '0' : 0;
		int y = len2 >= 0 ? b[len2] - '0' : 0;
		int z = x + y + carry;
		carry = z / 10;
		str += z % 10 + '0';
		len1--;
		len2--;
	}
	std::reverse(str.begin(), str.end());
	return str;
}