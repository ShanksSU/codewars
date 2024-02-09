/*
    https://www.codewars.com/kata/57ed56657b45ef922300002b/cpp
*/
#include <string>

std::string broken(const std::string& inp) {
    std::string str = "";
    for (char c : inp)
        str += c == '0' ? '1' : '0';
    return str;
}