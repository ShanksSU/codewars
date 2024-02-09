/*
    https://www.codewars.com/kata/541af676b589989aed0009e7/cpp
*/
#include <vector>
using namespace std;
using ull = unsigned long long;
ull countChange(const unsigned int amount, const std::vector<unsigned int>& coins) {
  vector<ull>f(amount + 1);
  f[0] = 1; //f[0][0] = 1;
  for(ull i = 1; i <= coins.size(); i++){
      ull v = coins[i - 1];
      for(ull j = v; j <= amount; j++)
          f[j] += f[j - v];
  }
  return f[amount];  
}