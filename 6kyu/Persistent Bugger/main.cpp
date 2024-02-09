/*
    https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/cpp
*/
int persistence(long long n) {
    if (n < 10) return 0;
    int sum = 0;
    while (n >= 10) {
        long long temp = n, product = 1;
        while (temp > 0) {
            product *= temp % 10;
            temp /= 10;
        }
        n = product, sum++;;
    }
    return sum;
}