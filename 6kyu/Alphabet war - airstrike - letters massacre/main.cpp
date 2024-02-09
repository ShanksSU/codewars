/*
    https://www.codewars.com/kata/5938f5b606c3033f4700015a/cpp
*/
#include <string>
#include <unordered_map>
using namespace std;

string alphabetWar(string fight) {
    int result = 0;
    unordered_map<char, int> map{
        {'w',4}, {'p',3}, {'b',2}, {'s',1},
        {'m',-4}, {'q',-3}, {'d',-2}, {'z',-1}
    };

    string bombed = fight;
    for (int i = 0; i < fight.size(); i++) {
        if (fight[i] == '*') {
            if (i != 0) bombed[i - 1] = '_';
            if (i != fight.size() - 1) bombed[i + 1] = '_';
        }
    }

    for (char c : bombed)
        result += map[c];

    if (result > 0)
        return "Left side wins!";
    else if (result == 0)
        return "Let's fight again!";
    else
        return "Right side wins!";
}