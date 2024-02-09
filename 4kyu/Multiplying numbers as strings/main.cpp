/*
    https://www.codewars.com/kata/55911ef14065454c75000062/cpp
*/
#include <iostream>
#include <string>

using namespace std;

string addStrings(string num1, string num2) {
    int len1 = static_cast<int>(num1.size()) - 1;
    int len2 = static_cast<int>(num2.size()) - 1;
    int carry = 0;
    string str = "";
    while (len1 >= 0 || len2 >= 0 || carry) {
        int x = len1 >= 0 ? num1[len1] - '0' : 0;
        int y = len2 >= 0 ? num2[len2] - '0' : 0;
        int z = x + y + carry;
        str += z % 10 + '0';
        carry = z / 10;
        len1--;
        len2--;
    }
    reverse(str.begin(), str.end());
    return str;
}

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") {
        return "0";
    }

    string res = "0";
    for (int i = num2.length() - 1; i >= 0; i--) {
        int carry = 0;
        string temp = "";
        for (int j = 0; j < num2.length() - 1 - i; j++) {
            temp += '0';
        }
        int n2 = num2.at(i) - '0';

        for (int j = num1.length() - 1; j >= 0 || carry != 0; j--) {
            int n1 = j < 0 ? 0 : num1.at(j) - '0';
            int product = (n1 * n2 + carry) % 10;
            temp += product + '0';
            carry = (n1 * n2 + carry) / 10;
        }
        reverse(temp.begin(), temp.end());
        res = addStrings(res, temp);
    }
  
    string ref = "";
    bool leadingZero = true;
    for (char c : res) {
        if (leadingZero && c == '0') {
            continue;
        }
        leadingZero = false;
        ref += c;
    }
    return ref;
}