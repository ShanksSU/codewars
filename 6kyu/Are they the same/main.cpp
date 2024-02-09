/*
    https://www.codewars.com/kata/550498447451fbbd7600041c/cpp
*/
#include <vector>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
        for (auto& num : a) num = num*num;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b ? true : false;
    }
};