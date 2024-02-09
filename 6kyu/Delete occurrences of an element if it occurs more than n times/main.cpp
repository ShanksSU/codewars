/*
    https://www.codewars.com/kata/554ca54ffa7d91b236000023/cpp
*/
std::vector<int> deleteNth(std::vector<int> arr, int n) {
	std::vector<int> result;
	for (int x : arr) {
		if (std::count(result.begin(), result.end(), x) < n)
			result.push_back(x);
	}
	return result;
}