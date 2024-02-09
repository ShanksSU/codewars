/*
    https://www.codewars.com/kata/5263a84ffcadb968b6000513/cpp
*/
using namespace std;
vector<vector<int>> matrix_multiplication(vector<vector<int>> &a, vector<vector<int>> &b, size_t n) {
	vector<vector<int>> c(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
	return c;
}