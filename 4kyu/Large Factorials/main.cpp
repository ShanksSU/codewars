/*
    https://www.codewars.com/kata/557f6437bf8dcdd135000010/cpp
*/
#include <string>
#define N 500
using namespace std;

int multiply(int x, int res[], int res_size) {
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

string factorial(int factorial){
    int res[N];

    res[0] = 1;
    int res_size = 1;

    for (int i = 2; i <= factorial; i++) {
        res_size = multiply(i, res, res_size);
    }

    string res_str = "";
    for (int j = res_size - 1; j >= 0; j--) {
        res_str += to_string(res[j]);
    }
    return res_str;
}