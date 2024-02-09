/*
    https://www.codewars.com/kata/54dc6f5a224c26032800005c/cpp
*/
#include <string>
using namespace std;

class StockList {
public:
    static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories){
    	if (lstOfArt.empty() || categories.empty()) return "";
        string result;

        for (auto c : categories) {
            int sum = 0;
            for (auto book = lstOfArt.begin(); book != lstOfArt.end();) {
                if (c.at(0) == book->at(0)) {
                    sum += stoi(book->substr(book->find(' '), book->size() - 1));
                    book = lstOfArt.erase(book);
                }
                else {
                    book++;
                }
            }
            if (!result.empty()) result += " - ";
            result += "(" + c + " : " + to_string(sum) + ")";
        }
        return result;
  };
};