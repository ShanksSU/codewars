/*
    https://www.codewars.com/kata/56b5dc75d362eac53d000bc8/cpp
*/
#include <string>
#include <ctype.h>
#include <math.h>
using namespace std;

std::string calculateString(std::string str) {
    string op = "+-*/";
    string str1 = "";
    string str2 = "";
    for (auto c : op) {
        if (str.find(c) != -1) {
            for (int i = 0; i < str.find(c); i++) {
                if (isdigit(str[i]) || str[i] == '.') {
                    str1 += str[i];
                }
            }
            for (int j = str.find(c); j < str.length(); j++) {
                if (isdigit(str[j]) || str[j] == '.') {
                    str2 += str[j];
                }
            }
            double red = c == '+' ? stod(str1) + stod(str2) : c == '-' ? stod(str1) - stod(str2) : c == '*' ? stod(str1) * stod(str2) : stod(str1) / stod(str2);
            return to_string((int)round(red)).c_str();
        }
    }
    return "";
}