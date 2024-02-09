/*
    https://www.codewars.com/kata/5981a139f5471fd1b2000071/cpp
*/
#include <string>

#include <map>
std::string task(std::string day_of_week, int n, int c) {
    std::map<std::string, std::string> mp = {
        {"Monday", "James"},
        {"Tuesday", "John"},
        {"Wednesday", "Robert"},
        {"Thursday", "Michael"},
        {"Friday", "William"}
    };
    std::string person = mp[day_of_week];
    std::stringstream ss;
    ss << "It is ";
    ss << day_of_week;
    ss << " today, ";
    ss << person;
    ss << ", you have to work, you must spray ";
    ss << n;
    ss << " trees and you need ";
    ss << n * c;
    ss << " dollars to buy liquid";
    return ss.str();
}