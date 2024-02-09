/*
    https://www.codewars.com/kata/564057bc348c7200bd0000ff/cpp
*/
class Thirteen {
public:
    static long long thirt(long long n) {
        long long sum = n, before = 0;
        int factor[] = { 1,10,9,12,3,4 };
        while (sum != before) {
            before = sum;
            sum = 0;
            int i = 0;
            n = before;
            while (n > 0) {
                sum += (n % 10) * factor[i % 6];
                i++;
                n = n / 10;
            }
        }
        return sum;
    }
};