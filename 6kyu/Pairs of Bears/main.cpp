/*
    https://www.codewars.com/kata/57d165ad95497ea150000020/cpp
*/
#include <string>
#include <utility>

std::pair<std::string, bool> bears(int x, const std::string& s) {
    std::string pairs;
    int count = 0;

    for (size_t i = 0; i + 1 < s.length(); i++) {
        std::string pair = s.substr(i, 2);
        if (pair == "B8" || pair == "8B") {
            pairs += pair;
            count++;
            i += 1;
        }
    }

    return {pairs, count >= x};
}