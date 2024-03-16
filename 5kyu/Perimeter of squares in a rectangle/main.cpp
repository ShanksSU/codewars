/*
    https://www.codewars.com/kata/559a28007caad2ac4e000083/cpp
*/
typedef unsigned long long ull;
class SumFct {
public:
	static ull perimeter(int n) {
		ull sum = 1;
		std::vector<ull> arr = { 0, 1 };
		for (ull i = 2; i <= n + 1; i++) {
			sum += (arr[i - 1] + arr[i - 2]);
			arr.push_back(arr[i - 1] + arr[i - 2]);
		}
		return sum * 4;
	}
};