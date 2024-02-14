/*
    https://www.codewars.com/kata/55736129f78b30311300010f/cpp
*/
std::string pattern(int n) {
    std::string pattern;
    if (n <= 0) return pattern;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            pattern += std::to_string(j);
        }
        pattern += '\n';
    }
    return pattern;
}