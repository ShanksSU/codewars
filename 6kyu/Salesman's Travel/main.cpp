/*
    https://www.codewars.com/kata/56af1a20509ce5b9b000001e/cpp
*/
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class SalesmanTravel {
public:
    static std::string travel(const std::string& orgr, std::string zipcode) {
        if (zipcode.length() < 4) return ":/";
        if (zipcode.length() < 8) return zipcode + ":/";

        stringstream inp(orgr);
        string str;
        vector<string> vecN;
        vector<string> vecS;

        while (getline(inp, str, ',')) {
            if (str.find(zipcode) != std::string::npos) {
                str = str.substr(0, str.find(zipcode) - 1);
                vecN.push_back(str.substr(0, str.find(' ')));
                vecS.push_back(str.substr(str.find(' ') + 1, str.length()));
            }
        }
        string ref = zipcode + ":";
        string d = "";
        for (auto n : vecS) {
            ref += d + n;
            d = ",";
        }
        d = "";
        ref += "/";
        for (auto n : vecN) {
            ref += d + n;
            d = ",";
        }
        return ref;
    }
};