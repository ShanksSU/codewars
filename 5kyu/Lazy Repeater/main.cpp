/*
    https://www.codewars.com/kata/51fc3beb41ecc97ee20000c3/cpp
*/
auto makeLooper(const std::string& str) {
    std::string s = str;
    return[s, i = 0]() mutable -> char {
        i = i % s.size();
        return s[i % s.size()];
    };
}