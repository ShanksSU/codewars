/*
    https://www.codewars.com/kata/5270d0d18625160ada0000e4/cpp
*/
#include <vector>

int score(const std::vector<int>& dice) {
    int score = 0;
    std::vector<int> counts(7, 0);
    for (int die : dice)
        counts[die]++;

    for (int i = 1; i <= 6; ++i) {
        if (counts[i] >= 3) {
            if (i == 1) score += 1000;
            else score += i * 100;
            counts[i] -= 3;
        }
    }
    score += counts[1] * 100;
    score += counts[5] * 50;
    return score;
}