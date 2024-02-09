/*
    https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/cpp
*/
#include <vector>
using namespace std;

int maxSequence(const std::vector<int>& arr) {
    if (arr.empty()) return 0;
    int lmax = 0, gmax = 0;
    for (int i = 0; i < arr.size(); i++) {
        lmax = lmax + arr[i];
        if (lmax > gmax) gmax = lmax;
        if (lmax < 0) lmax = 0;
    }
    return gmax;
}