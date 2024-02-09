/*
    https://www.codewars.com/kata/520b9d2ad5c005041100000f/cpp
*/
#include <regex>
using namespace std;
string pig_it(std::string str) {
    return egex_replace(move(str), regex{"([a-zA-Z])(\\S*)"}, "$2$1ay");
}