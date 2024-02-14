/*
    https://www.codewars.com/kata/5d49c93d089c6e000ff8428c/cpp
*/
#include <vector>
int save(std::vector<int> sizes, int hd) {
  int sum = 0;
  for(int i = 0; i < sizes.size(); i++){
    sum += sizes[i];
    if(sum > hd) return i;
  }
  return sizes.size();
}