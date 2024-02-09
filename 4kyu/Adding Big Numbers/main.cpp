/*
    https://www.codewars.com/kata/525f4206b73515bffb000b21/cpp
    test
*/
#include <string>

std::string add(const std::string& num1, const std::string& num2) {
    int len1 = static_cast<int>(num1.size()) - 1;
    int len2 = static_cast<int>(num2.size()) - 1;
    int carry = 0;
    std::string str = "";
    while (len1 >= 0 || len2 >= 0 || carry) {
        int x = len1 >= 0 ? num1[len1] - '0' : 0;
        int y = len2 >= 0 ? num2[len2] - '0' : 0;
        int z = x + y + carry;
        str += z % 10 + '0';
        carry = z / 10;
        len1--;
        len2--;
    }
    std::reverse(str.begin(), str.end());
    return str;
}