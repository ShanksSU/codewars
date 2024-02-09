/*
    https://www.codewars.com/kata/54da5a58ea159efa38000836/cpp
*/
#include <numeric>
#include <vector>

int findOdd(const std::vector<int>& numbers) {
  return std::accumulate(numbers.cbegin(), numbers.cend(), 0, std::bit_xor<>());
}