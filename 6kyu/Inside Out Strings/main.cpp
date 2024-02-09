/*
    https://www.codewars.com/kata/57ebdf1c2d45a0ecd7002cd5/cpp
*/
#include <sstream>
#include <algorithm>
std::string insideOut(std::string x) {
    std::stringstream ss(x);
    std::string temp, ans;
    while (ss >> temp) {
        int midP = temp.size() / 2;
        std::reverse(temp.begin(),temp.begin() + midP);
        std::reverse(temp.begin() + midP + (temp.size() % 2),temp.end());
        ans.append(temp);
        ans.push_back(' ');
    }
    if (!ans.empty()) ans.pop_back();
    return ans;
}