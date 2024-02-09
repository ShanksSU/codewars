/*
    https://www.codewars.com/kata/5626b561280a42ecc50000d1
*/
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
    vector<unsigned int> ans = {};
    for (int i = a; i <= b; i++) {
        string num_str = to_string(i);
        int str_len = num_str.length();
        int ref = 0;
        for (int k = 0; k < str_len; k++) {
            ref += pow(int(num_str[k] - '0'), k + 1);
        }
        if (ref == i) {
            ans.push_back(ref);
        }
    }
    return ans;
}