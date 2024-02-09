/*
    https://www.codewars.com/kata/5536a85b6ed4ee5a78000035/cpp
*/
#include <unordered_map>
#include <vector>
#include <cmath>

typedef std::unordered_map<std::string, double> stringdblmap;
class Tour {
public:
    static int tour(std::vector<std::string> &arrFriends, std::vector<std::vector<std::string>> &ftwns, stringdblmap &h){
        std::unordered_map<std::string, std::string> ump;
        for(const auto& n : ftwns){
            ump[n[0]] = n[1];
        }
            
        double total = 0, ref = 0;
        for(const auto& n : arrFriends){
            if(ump.find(n) == ump.end()) continue;
            double d = h[ump[n]];
            ref += sqrt(d * d - total * total);
            total = d;
        }
        return int(ref + total);
    }
};