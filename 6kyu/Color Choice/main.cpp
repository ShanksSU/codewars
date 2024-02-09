/*
    https://www.codewars.com/kata/55be10de92aad5ef28000023/cpp
*/
long long choose(int n, int k) {
    if (k == 0) return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

class ColorChoice {
public:
    static long long checkChoose(long long m, int n) {
        for (int x = 0; x <= n; ++x) {
            if (m == choose(n, x)) {
                return x;
            }
        }
        return -1;
    }
};