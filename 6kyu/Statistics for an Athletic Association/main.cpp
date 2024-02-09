/*
    https://www.codewars.com/kata/55b3425df71c1201a800009c/cpp
*/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>  
#include <algorithm>  
#include <iomanip>
using namespace std;
int median(vector<double> arr) {
	int len = arr.size();
	sort(arr.begin(), arr.end());
	const auto middleItr = arr.begin() + arr.size() / 2;
	if (len % 2 == 0) {
		const auto leftMiddleItr = std::max_element(arr.begin(), middleItr);
		return (*leftMiddleItr + *middleItr) / 2.0;
	}
	else {
		return *middleItr;
	}
}

string printVector(vector<vector<int>> &arr) {
	int total = 0;
	vector<double> totalarr = {};
	for (auto m : arr) {
		total = 0;
		for (int i = 0; i < m.size(); i++) {
			switch (i) {
			case 0:
				m[i] *= 3600;
				total += m[i];
				//printf_s("m[%d]：%d\t", i, m[i]);
				break;
			case 1:
				m[i] *= 60;
				total += m[i];
				//printf_s("m[%d]：%d\t", i, m[i]);
				break;
			case 2:
				total += m[i];
				//printf_s("m[%d]：%d\t", i, m[i]);
				break;
			default:
				break;
			}
		}
		totalarr.push_back(total);
		//cout << endl;
	}

	int average = accumulate(totalarr.begin(), totalarr.end(), 0.0) / totalarr.size();
	int range = *max_element(totalarr.begin(), totalarr.end()) - *min_element(totalarr.begin(), totalarr.end());
	int arrmedian = median(totalarr);
	vector<string> ans = {};
	for (auto ele : vector<int>{ range, average, arrmedian }) {
		int h = ele / 3600;
		int m = ele % 3600 / 60;
		int s = ele % 3600 % 60;
		string ref = "";
		stringstream ss;
		ss << setw(2) << setfill('0') << h << '|';
		ss << setw(2) << setfill('0') << m << '|';
		ss << setw(2) << setfill('0') << s;
		//cout << ss.str() << endl;
		ref = ss.str();
		ans.push_back(ref);	}
	return "Range: " + ans[0] + " Average: " + ans[1] + " Median: " + ans[2];
}

class Stat {
public:
	static std::string stat(const std::string& strg) {
        string str = strg;
        string s = "";
        string s1 = "";
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        stringstream inp(str);
        vector<vector<int>> arr2 = {};
        while (getline(inp, s, ',')) {
            stringstream inp1(s);
            vector<int> arr1 = {};
            while (getline(inp1, s1, '|')) {
                arr1.push_back(stoul(s1));
            }
            arr2.push_back(arr1);
        }
        return printVector(arr2);
    }
};

