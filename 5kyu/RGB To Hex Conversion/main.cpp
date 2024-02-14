/*
    https://www.codewars.com/kata/513e08acc600c94f01000001/cpp
*/
#include <string>
#include <fmt/format.h>
std::string rgb_to_hex(int r, int g, int b) {
    r = r < 0 ? 0 : r > 255 ? 255 : r;
    g = g < 0 ? 0 : g > 255 ? 255 : g;
    b = b < 0 ? 0 : b > 255 ? 255 : b;
    std::string result = fmt::format("{:02x}{:02x}{:02x}", r, g, b);
    std::transform(result.begin(), result.end(), result.begin(), [](char c) {return toupper(c); });
    return result;
}