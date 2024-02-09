/*
    https://www.codewars.com/kata/5552101f47fc5178b1000050/cpp
*/
#include<cmath>
class DigPow {
public:
	static int digPow(int n, int p) {
		std::string str(std::to_string(n));
		float sum = 0;
		for (char c : str) {
			sum += std::pow((int)(c - '0'), p++);
		}
		return sum >= n ? (sum / n) == int(sum / n) ? sum / n : -1 : -1;
	}
}d;