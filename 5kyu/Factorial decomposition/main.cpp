/*
    https://www.codewars.com/kata/5a045fee46d843effa000070/cpp
*/
#include <map>
using namespace std;

std::string decomp(int n) {
  map<int, int> mp;
    for (int i = n; i > 1; i--) {
        int sum = i;
        for (int j = 2; j <= sum; j++) {
            while (sum != j) {
                if (sum % j == 0) {
                    mp[j]++;
                    sum /= j;
                }
                else {
                    break;
                }
            }
        }
        mp[sum]++;
    }
    std::string str = "";
    std::string str1 = "";
    for (auto m : mp) {
        str += str1;
        if (m.second > 1) {
            str += std::to_string(m.first) + "^" + std::to_string(m.second);
        }
        else {
            str += std::to_string(m.first);
        }
        str1 = " * ";
    }
	return str;
}