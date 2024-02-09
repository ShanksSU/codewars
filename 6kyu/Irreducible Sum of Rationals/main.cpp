/*
    https://www.codewars.com/kata/5517fcb0236c8826940003c9/cpp
*/
#include <utility>

class SumFractions
{
public:
    static std::pair <int, int> sumFracts(std::vector<std::vector<int>> &l);
};

int gcd(int a, int b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}

int lcm(int a, int b) {
    int temp = a * b;
    temp = temp / gcd(a, b);
    return temp;
}

std::pair <int, int> SumFractions::sumFracts(std::vector<std::vector<int>>& l) {
    for (auto &m : l) {
        if (m[1] % m[0] == 0) {
            m[1] = m[1] / m[0];
            m[0] = 1;
        }
    }
    int m = 0;
    int sum = 0;
    if (!l.empty()) {
        m = l[0][1];
        for (int i = 1; i < l.size(); i++) {
            m = m * l[i][1] / gcd(m, l[i][1]);
        }
        
        for (auto& elem : l) {
            int num = m / elem[1];
            sum += (elem[0] * num);
        }
        int gcd_ = gcd(sum, m);

        if (sum % m == 0) {
            return { sum / m, 1 };
        }
        else if (gcd_ != 1) {
            return { sum / gcd_, m / gcd_ };
        }
        else {
            return { sum, m };
        }
    }
    return { 0, 1 };
}