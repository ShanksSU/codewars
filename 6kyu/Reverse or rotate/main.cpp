/*
    https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991/cpp
*/
#include <string>
#include <algorithm>

class RevRot {
public:
    static std::string revRot(const std::string& strng, unsigned int sz) {
        if (sz <= 0 || strng.empty() || sz > strng.length())
            return "";

        std::string chunk = strng.substr(0, sz);
        bool isEvenSum = true;
        for (char c : chunk)
            if (c % 2 == 1) isEvenSum = !isEvenSum;

        if (isEvenSum) {
            std::reverse(chunk.begin(), chunk.end());
        }
        else {
            chunk.push_back(chunk.front());
            chunk.erase(0, 1);
        }
        return chunk + revRot(strng.substr(sz), sz);
    }
};