/*
    https://www.codewars.com/kata/56dbeec613c2f63be4000be6/cpp
*/
#include <iostream>
#include <iostream>
#include <vector>
#include <sstream>

#define PRINT(str) {        \
    printf("%s\n", str.c_str());    \
}

std::vector<std::string> str2Arr(std::string strng){
    std::vector<std::string> arr = {};
    std::stringstream inp(strng);
    std::string str = "";
    
    while(getline(inp, str, '\n')){
        arr.push_back(str);
    }

    return arr;
}

class Opstrings3 {
public:
    static std::string diag1Sym(const std::string &strng) {
        std::vector<std::string> arr = str2Arr(strng);
        std::string ref = "";
        std::string dot = "";

        for(int i = 0; i < arr.size(); i++) {
            ref += dot;
            for(int j = 0; j < arr[i].size(); j++){
                ref += arr[j][i];
            }
            dot = "\n";
        }

        return ref;
    };

    static std::string rot90Clock(const std::string &strng) {
        std::vector<std::string> arr = str2Arr(strng);
        std::string ref = "";
        std::string dot = "";

        for(int i = 0; i < arr.size(); i++) {
            ref += dot;
            for(int j = arr[0].length() - 1; j >= 0; j--){
                ref += arr[j][i];
            }
            dot = "\n";
        }
        return ref;
    };

    static std::string selfieAndDiag1(const std::string &strng) {
        std::vector<std::string> arr = str2Arr(strng);
        std::vector<std::string> arr_2 = str2Arr(diag1Sym(strng));
        std::string ref = "";
        std::string dot = "";
        for(int i = 0; i < arr.size(); i++){
            ref += dot;
            ref += (arr[i] + "|" + arr_2[i]);
            dot = "\n";
        }
        return ref;
    };

    static std::string oper(std::string(*func)(const std::string&), const std::string &s){
        return func(s);
    }
};