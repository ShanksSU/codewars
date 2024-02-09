/*
    https://www.codewars.com/kata/54bb6f887e5a80180900046b/cpp
*/
#include <string>

int longest_palindrome(const std::string& s) {
    if (s.length() == 0) return 0;
    int sum = 1;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < s.length() - i; j++) {
            std::string str = std::string(s.begin() + i, s.end() - j);
            if (str == std::string(str.rbegin(), str.rend())) {
                if (str.length() > sum) sum = str.length();
            }
        }
    }
    return sum;
}