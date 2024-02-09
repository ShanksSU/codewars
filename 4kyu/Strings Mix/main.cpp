/*
    https://www.codewars.com/kata/5629db57620258aa9d000014/cpp
*/
class Mix {
public:
    static std::string mix(const std::string& s1, const std::string& s2) {
        std::unordered_map<char, int> mp1, mp2;
        std::vector<std::vector<int>> arr2D;
        for (char c : s1) if (islower(c)) mp1[c]++;
        for (char c : s2) if (islower(c)) mp2[c]++;
        for (char i = 'a'; i <= 'z'; i++) {
            if (mp1[i] > mp2[i] && mp1[i] > 1) arr2D.push_back({ 1, (int)i, mp1[i] });
            else if (mp1[i] < mp2[i] && mp2[i] > 1) arr2D.push_back({ 2, (int)i, mp2[i] });
            else if (mp1[i] == mp2[i] && mp1[i] > 1) arr2D.push_back({ 3, (int)i, mp2[i] });
        }
        std::sort(arr2D.begin(), arr2D.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            if (a[2] != b[2]) return a[2] > b[2];
            if (a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1]; 
        });
        
        std::string str = "", dt = "";
        for (auto m : arr2D) {
            str += dt;
            if (m[0] != 3) str += (std::to_string(m[0]) + ":" + std::string(m[2], (char)m[1]).c_str());
            else str += "=:", str += std::string(m[2], (char)m[1]).c_str();
            dt = '/';
        }
        return str;
    }
};