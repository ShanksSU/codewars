/*
    https://www.codewars.com/kata/55cf3b567fc0e02b0b00000b/cpp
*/
#include <numeric>
#include <iomanip>
#include <set>
using namespace std;

using ull = unsigned long long;
ull num = 0;
std::set<ull> arr;
void generate_partitions(ull n, ull max_part, std::vector<ull>& partition) {
    if (n == 0) {
        num++;
        ull ref = 1;
        for (ull i = 0; i < partition.size(); ++i) ref *= partition[i];
        arr.insert(ref);
        return;
    }

    for (int i = max_part; i >= 1; --i) {
        if (n >= i) {
            partition.push_back(i);
            generate_partitions(n - i, i, partition);
            partition.pop_back();
        }
    }
}

void exp_sum_print(ull n) {
    std::vector<ull> partition;
    generate_partitions(n, n, partition);
}

class IntPart {
public:
    static std::string part(long long n);
};

std::string IntPart::part(long long n) {
    exp_sum_print(n);
    int len = num - (num - arr.size());
    vector<ull> arr1(arr.begin(), arr.end());
    ostringstream oss;
    oss << std::fixed << std::setprecision(2) <<
        "Range: " << *--arr.end() - *arr.begin() <<
        " Average: " << accumulate(arr.begin(), arr.end(), 0.) / double(len) <<
        " Median: " << (len % 2 ? arr1[len / 2] : double(arr1[len / 2] + arr1[len / 2 - 1]) / 2.0);
    return oss.str();
}