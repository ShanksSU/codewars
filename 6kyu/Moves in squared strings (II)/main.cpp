/*
    https://www.codewars.com/kata/56dbe7f113c2f63570000b86/cpp
*/
#include <vector>
#include <string>
#include <sstream>

class Opstrings1 {
public:
    std::vector<std::string> operator() (std::string strng) {
        std::stringstream ss(strng);
        std::string str;
        std::vector<std::string> vec = {};
        while (getline(ss, str, '\n')) {
            vec.push_back(str);
        }
        return vec;
    }
    static std::string rot(const std::string& strng);
    static std::string selfieAndRot(const std::string& strng);
    // ... complete oper
    static std::string oper(std::string(*func)(const std::string&), const std::string& s) {
        return  func(s);
    };

private:
    static std::string merge(const std::vector<std::string>& strings) {
        std::string result;
        for (auto& str : strings) {
            result += str;
            result += "\n";
        }
        return result.erase(result.size() - 1);
    }
}opstrings1;

std::string Opstrings1::rot(const std::string& strng) {
    std::vector<std::string> str = opstrings1(strng);
    std::reverse(str.begin(), str.end());
    std::stringstream ss("");
    for (auto& n : str) { std::reverse(n.begin(), n.end()); }
    return merge(str);
}

std::string Opstrings1::selfieAndRot(const std::string& strng) {
    std::vector<std::string> str = opstrings1(strng);
    std::vector<std::string> ref;
    int len = str.size();
    for (auto n : str) { n += std::string(len, '.'); ref.push_back(n); }
    std::reverse(str.begin(), str.end());
    for (auto m : str) { std::reverse(m.begin(), m.end()); m = std::string(len, '.') + m; ref.push_back(m); }
    return merge(ref);
}