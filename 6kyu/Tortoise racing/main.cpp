/*
    https://www.codewars.com/kata/55e2adece53b4cdcb900006c/cpp
*/
#include <vector>

class Tortoise {
public:
    static std::vector<int> race(int v1, int v2, int g) {
        if (v1 >= v2) return { -1, -1, -1 };
        int time = g * 3600 / (v2 - v1);
        return { time / 3600, (time % 3600) / 60, time % 60 };
    }
};