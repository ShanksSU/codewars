/*
    https://www.codewars.com/kata/586560a639c5ab3a260000f3/cpp
*/
#include <string>
#include <vector>

std::vector<std::string> rotate(const std::string& s) {
    std::vector<std::string> arr;
    for (int i = 0; i < s.size(); i++) {
        arr.push_back(s.substr(i + 1, s.size()) + s.substr(0, i + 1));
    }
    return arr;
}