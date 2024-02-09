/*
    https://www.codewars.com/kata/598106cb34e205e074000031/cpp
*/
int countDeafRats(const std::string& town) {
    std::string clean{ town };
    clean.erase(remove_if(clean.begin(), clean.end(), isspace), clean.end()); // erase whitespace
    int res = 0;

    // No matter where the flute, O must always appear on odd positions
    // If not, the rat is facing the wrong way.
    for (int i = 1; i < clean.length(); i += 2) {
        if (clean[i] != 'O') { res++; }
    }
    return res;
}