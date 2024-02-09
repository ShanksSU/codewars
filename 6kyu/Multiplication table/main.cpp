/*
    https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08/cpp
*/
#include <vector>
using namespace std;
vector<vector<int>> multiplication_table(int n){
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
    return arr;
}