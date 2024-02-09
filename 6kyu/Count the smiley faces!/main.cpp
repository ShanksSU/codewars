/*
    https://www.codewars.com/kata/583203e6eb35d7980400002a/cpp
*/
#include <regex>

int countSmileys(std::vector<std::string> arr) {
    int num = 0;
    std::regex smiles_reg("[:|;](-|~)?[)|D]");
    for (std::string &smile : arr)
        if (std::regex_match(smile, smiles_reg)) num++;
    return num;
}