/*
    https://www.codewars.com/kata/51b62bf6a9c58071c600001b/cpp
*/
#include <string>
#include <vector>

std::string solution(int num) {
    std::vector<std::string>str = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
    std::vector<int>nums = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
    std::string res = "";
    for (int i = str.size() - 1; i >= 0; i--) {
        while (num >= nums[i]) {
            num -= nums[i];
            res += str[i];
        }
    }
    return res;
}