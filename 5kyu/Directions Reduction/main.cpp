/*
    https://www.codewars.com/kata/550f22f4d758534c1100025a/cpp
*/
#include <iostream>
#include <vector>
using namespace std;

class DirReduction {
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> arr){
        map<string, string> mp{
            {"EAST", "WEST"},
            {"WEST", "EAST"},
            {"NORTH", "SOUTH"},
            {"SOUTH", "NORTH"}
        };
        vector<string> result;
        for (const auto& way : arr) {
          if (result.empty() || result.back() != mp.at(way)) {
            result.push_back(way);
          }
          else {
            result.pop_back();
          }
        }
        return result;
    };
};