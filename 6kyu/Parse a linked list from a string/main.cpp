/*
    https://www.codewars.com/kata/582c5382f000e535100001a7/cpp
*/
#include <iostream>
#include <string>

Node* parse(const std::string& s) {
    if (s == "nullptr") return nullptr;
    Node* next = parse(s.substr(s.find(' ') + 4));
    return new Node(std::stoi(s.substr(0, s.find(' '))), next);
}