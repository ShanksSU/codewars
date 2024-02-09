/*
    https://www.codewars.com/kata/54d512e62a5e54c96200019e/cpp
*/
#include <map>
#include <string>
using namespace std;

class PrimeDecomp {
public:
	static std::string factors(int lst) {
		map<int, int> hashmap;
		for (int i = 2; i <= lst; i++) {
			while (lst % i == 0) {
				++hashmap[i];
				lst /= i;
			}
		}
		string str, s;
		for (auto n : hashmap) {
			if (n.second != 1) {
				s = "(" + to_string(n.first) + "**" + to_string(n.second) + ")";
				str += s;
			}
			else {
				s = "(" + to_string(n.first) + ")";
				str += s;
			}
		}
		return str;
	};

};