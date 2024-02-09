/*
    https://www.codewars.com/kata/55b4d87a3766d9873a0000d4/cpp
*/
#include <string>
#include <math.h>
using namespace std;

class Carboat
{

public:
	static string howmuch(int m, int n) {
        if (m > n) swap(m, n);

        int x = 0, y = 0, z = 0;
        string str = "[";
        for (int i = m/10; i <= n; i++) {
            x = 1 + 9 * i;
            y = -(1 / 7) + (9 / 7) * i;
            if (x > n) break;
            if (x < m) continue;
            if (x - 9 * y == 1) {
                for (int j = 0; j <= n; j++) {
                    if (x - 7 * j == 2) {
                        str += "[M: " + to_string(x) + " B: " + to_string(j) + " C: " + to_string(y) + "]";
                    }
                }
            }
        }
        str += "]";

        return str;
    }
}C;