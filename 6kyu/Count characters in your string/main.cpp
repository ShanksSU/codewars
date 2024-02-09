/*
    https://www.codewars.com/kata/52efefcbcdf57161d4000091/cpp
*/
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> r;
    for(const char& c: string) {
      r[c]++;
    }
    return r;
}