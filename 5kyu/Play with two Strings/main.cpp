#include <string>
std::string work_on_strings(const std::string& a, const std::string& b) {
    std::string str1(a), str2(b);
    auto func = [](char z) { return islower(z) ? toupper(z) : tolower(z); };
    for (auto& x : str1) {
        for (auto& y : str2) {
            if (tolower(x) == tolower(y)) x = func(x), y = func(y);
        }
    }
    return str1 + str2;
}