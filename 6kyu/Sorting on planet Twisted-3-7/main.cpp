/*
    https://www.codewars.com/kata/58068479c27998b11900056e/cpp
*/
#include <vector>
using namespace std;

vector <int> sortTwisted37(vector <int> numbers) {
    auto func = [](int n) -> int {
        string str = to_string(n);
        for (char &c : str) {
            if (c == '3') c = '7';
            else if (c == '7') c = '3';
        }
        return atoi(str.c_str());
    };
    sort(numbers.begin(), numbers.end(), [&](int a, int b) {
        return func(a) < func(b);
    });
    return numbers;
}