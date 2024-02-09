/*
    https://www.codewars.com/kata/53697be005f803751e0015aa/cpp
*/
#include <string>
#include <unordered_map>

std::string encode(const std::string& str) {
    static const std::unordered_map<char, char> vowelMap{
        {'a', '1'}, {'e', '2'}, {'i', '3'}, {'o', '4'}, {'u', '5'}
    };
    
    std::string newstr = str;
    for (auto &c : newstr) {
        auto it = vowelMap.find(c);
        if (it != vowelMap.end()) {
            c = it->second;
        }
    }
    return newstr;
}

std::string decode(const std::string& str) {
    static const std::unordered_map<char, char> digitMap{
        {'1', 'a'}, {'2', 'e'}, {'3', 'i'}, {'4', 'o'}, {'5', 'u'}
    };
    
    std::string newstr = str;
    for (auto& c : newstr) {
        auto it = digitMap.find(c);
        if (it != digitMap.end()) {
            c = it->second;
        }
    }
    return newstr;
}
