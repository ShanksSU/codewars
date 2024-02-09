/*
    https://www.codewars.com/kata/52ea928a1ef5cfec800003ee/cpp
*/
#include <cstdint>
#include <string>
#include <cmath>

uint32_t ip_to_int32(const std::string& ip) {
    int a, b, c, d;
    sscanf(ip.c_str(), "%i.%i.%i.%i", &a, &b, &c, &d);
    return a * pow(2, 24) + b * pow(2, 16) + c * pow(2, 8) + d;
}