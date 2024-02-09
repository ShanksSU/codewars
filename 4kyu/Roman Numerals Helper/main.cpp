/*
    https://www.codewars.com/kata/51b66044bce5799a7f000003/cpp
*/
#include <unordered_map>
using namespace std;
class RNHelper {
public:
    string to_roman(int num) {
        string r[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int n[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string rnum = "";
        for (int i = 0 ; i < 13; ++i) {
            while (num >= n[i]) {
                num -= n[i];
                rnum += r[i];
            }
        }
        return rnum;
    }
    
    int from_roman(string rnum) {
        unordered_map<char, int> ri = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int n = rnum.size(), res = 0;
        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && ri[rnum[i]] < ri[rnum[i+1]])
                res -= ri[rnum[i]];
            else
                res += ri[rnum[i]];
        }
        return res;
    }
};