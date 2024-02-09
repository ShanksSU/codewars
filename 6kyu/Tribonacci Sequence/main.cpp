/*
    https://www.codewars.com/kata/556deca17c58da83c00002db/cpp
*/
#include <vector>
using namespace std;

vector<int> tribonacci(vector<int> signature, int n) {
    if (n == 0) return {};
    if (n <= signature.size())
        return vector<int>(signature.begin(), signature.begin() + n);

    for (int i = signature.size(); i < n; i++) {
        int tribonacci_number = signature[i - 3] + signature[i - 2] + signature[i - 1];
        signature.push_back(tribonacci_number);
    }
    return signature;
}