/*
    https://www.codewars.com/kata/5616868c81a0f281e500005c/cpp
*/
class Rank {
public:
	static std::string nthRank(const std::string& st, std::vector<int>& we, int n) {
		if (st.empty() || we.empty()) return "No participants";
		if (n > we.size()) return "Not enough participants";
		std::stringstream inp(st);
		std::string str = "";
		std::vector<std::string> arr;
		while (getline(inp, str, ',')) arr.push_back(str);

		std::vector<std::pair<std::string, int>> v;
		for (int i = 0; i < arr.size(); i++) {
			int num = arr[i].length();
			for (auto m : arr[i]) num += (tolower(m) - 96);
			v.push_back({ arr[i], num * we[i] });
		}
		std::sort(v.begin(), v.end(), [](const auto& lhs, const auto& rhs) {
			return lhs.second != rhs.second ? lhs.second > rhs.second : lhs.first < rhs.first;
		});
		return v[n - 1].first;
	}
};