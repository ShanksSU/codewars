/*
    https://www.codewars.com/kata/5541f58a944b85ce6d00006a/cpp
*/
#include <vector>
typedef unsigned long long ull;
using namespace std;

unsigned long long fib(unsigned long long n) {
	if (n <= 2) return 1;
	return fib(n - 1) + fib(n - 2);
}

class ProdFib {
public:
    static std::vector<ull> productFib(ull prod) {
        for (unsigned long long i = 0; i < prod; i++) {
            for (unsigned long long j = i + 1; j < prod; j++) {
                if (fib(i) * fib(j) == prod) {
                    printf("%d, %d, %s -> fib(%d) * fib(%d) = %d\n", fib(i), fib(j), "true", i, j, prod);
                    unsigned long long A = fib(i);
                    unsigned long long B = fib(j);
                    return { A, B, true };
                }
                else if (fib(i) * fib(j) > prod) {
                    printf("%d, %d, %s -> fib(%d) * fib(%d) = %d\n", fib(i), fib(j), "false", i, j, prod);
                    unsigned long long A = fib(i);
                    unsigned long long B = fib(j);
                    return { A, B, false };
                }
                i++;
            }
        }
    };
};