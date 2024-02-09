/*
    https://www.codewars.com/kata/521c2db8ddc89b9b7a0000c1/cpp
*/
#include <vector>
std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  size_t n = snail_map[0].size();
    std::vector<int> snail_vec(n * n);
    int i = 0, j = 0, k = 0, margin = 0;
    while (k < n * n){
        //right:
        for (; j < n - margin; j++, k++)
            snail_vec[k] = snail_map[i][j];
        //down:
        for (i++, j--; i <= j; i++, k++)
            snail_vec[k] = snail_map[i][j];
        //left:
        for (i--, j--; j >= margin; j--, k++)
            snail_vec[k] = snail_map[i][j];
        //top:
        for (i--, j++; i > j; i--, k++)
            snail_vec[k] = snail_map[i][j];
            
        i++, j++, margin++;
    }
    return snail_vec;
}