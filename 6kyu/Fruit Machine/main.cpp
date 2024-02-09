/*
    https://www.codewars.com/kata/590adadea658017d90000039/cpp
*/
#include <array>

unsigned fruit(const std::array<std::vector<std::string>, 3>& reels, const std::array<unsigned, 3>& spins) {
    std::vector<std::string> v = { "Jack", "Queen", "King", "Bar", "Cherry", "Seven", "Shell", "Bell", "Star", "Wild" };
    int fruit_1 = std::find(v.begin(), v.end(), reels[0][spins[0]]) - v.begin() + 1;
    int fruit_2 = std::find(v.begin(), v.end(), reels[1][spins[1]]) - v.begin() + 1;
    int fruit_3 = std::find(v.begin(), v.end(), reels[2][spins[2]]) - v.begin() + 1;

    if ((fruit_1 == fruit_2) && (fruit_2 == fruit_3))
        return fruit_1 * 10;
    if (fruit_3 == fruit_1)
        std::swap(fruit_3, fruit_2);
    if (fruit_3 == fruit_2)
        std::swap(fruit_3, fruit_1);
    if (fruit_1 != fruit_2) return 0;
    if (fruit_3 == 10) fruit_1 *= 2;
    return fruit_1;
}