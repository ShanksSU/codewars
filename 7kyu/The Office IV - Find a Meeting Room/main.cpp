/*
    https://www.codewars.com/kata/57f604a21bd4fe771b00009c/cpp
*/
#include <vector>

int meeting(const std::vector<char>& rooms) {
  auto it = std::find(rooms.begin(), rooms.end(), 'O');
  return it != rooms.end() ? std::distance(rooms.begin(), it) : -1;
}