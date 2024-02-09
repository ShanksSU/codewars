/*
    https://www.codewars.com/kata/546f922b54af40e1e90001da/cpp
*/
#include <string>
std::string alphabet_position(const std::string& text) {
    std::string new_text = text;
    for (char& c : new_text)
        c = tolower(c);

    std::string out_text = "";
    for (auto c : new_text) {
        if (c >= 'a' && c <= 'z') out_text += (std::to_string(c - 96) + ' ');
    }
    return out_text.substr(0, out_text.length() - 1);
}