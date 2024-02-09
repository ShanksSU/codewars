/*
    https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/cpp
*/
#include <string>
#include <sstream>
using namespace std;

std::string highestScoringWord(const std::string &str){
    stringstream inp(str);
    string s;

    int len = 0;
    int len_max = 0;
    string max_str = "";
    while (getline(inp, s, ' ')) {
        len = 0;
        for(auto c : s){
            len += c - 96;
        }

        if(len > len_max){
            max_str = s.c_str();
            len_max = len;
        }
    }

	return max_str;
}