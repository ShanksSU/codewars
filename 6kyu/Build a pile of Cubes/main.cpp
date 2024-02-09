/*
    https://www.codewars.com/kata/5592e3bd57b64d00f3000047/cpp
*/
class ASum {
public:
    static long long findNb(long long m) {
        long long volume = 0, n = 1;
        while (m > volume) {
            volume += (n * n * n++);
        }
        return volume == m ? n - 1 : -1;
    };
};