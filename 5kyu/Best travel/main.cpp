/*
    https://www.codewars.com/kata/55e7280b40e1c4a06d0000aa/cpp
*/
#include <numeric>
using namespace std;
class BestTravel {
public:
    static int chooseBestSum(int t, int k, const std::vector<int> &ls) {
        if (k > ls.size()) return -1;
        std::vector<int> ref;
        combinationUtil(ls, {}, 0, ls.size() - 1, 0, k, t, ref);
        if (ref.empty()) return -1;
        std::sort(ref.begin(), ref.end());
        return ref.back();
    }

private:
    static void combinationUtil(const std::vector<int> &arr, std::vector<int> data, int start, int end, int index, int r, int t, std::vector<int> &ref) {
        if (index == r) {
            int sum = std::accumulate(data.begin(), data.end(), 0);
            if (sum <= t) ref.push_back(sum);
            return;
        }
        for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
            data.push_back(arr[i]);
            combinationUtil(arr, data, i + 1, end, index + 1, r, t, ref);
            data.pop_back();
        }
    }
};