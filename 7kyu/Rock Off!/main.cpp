/*
    https://www.codewars.com/kata/5b097da6c3323ac067000036/cpp
*/
#include <fmt/format.h>
using namespace std;

string solve_rock_off(const vector<int> &alice, const vector<int> &bob) {
    int num1 = 0, num2 = 0; 
    for(int i = 0; i < alice.size(); i++){
        if(alice[i] > bob[i]) num1++;
        if(alice[i] < bob[i]) num2++;
    }
    if(num1 > num2) return fmt::format("{}, {}: Alice made \"Kurt\" proud!", num1, num2);
    if(num1 < num2) return fmt::format("{}, {}: Bob made \"Jeff\" proud!", num1, num2);
    return fmt::format("{}, {}: that looks like a \"draw\"! Rock on!", num1, num2);
}