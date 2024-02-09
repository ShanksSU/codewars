/*
    https://www.codewars.com/kata/54da539698b8a2ad76000228/cpp
*/
#include<vector>

bool isValidWalk(std::vector<char> walk) {
    if (walk.size() != 10) return false;
    int x = 0, y = 0;
    for (char c : walk) {
        switch (c) {
            case 'n': y++; break;
            case 's': y--; break;
            case 'e': x++; break;
            case 'w': x--; break;
        }
    }
    if (x == 0 && y == 0) return true;
    return false;
}