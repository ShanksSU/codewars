/*
    https://www.codewars.com/kata/592a6ad46d6c5a62b600003f/cpp
*/
std::string transform(const std::string& s) {
    std::map<char, char> m = {
        {'G', 'A'}, {'A', 'G'}, {'g', 'a'}, {'a', 'g'},
        {'D', 'E'}, {'E', 'D'}, {'d', 'e'}, {'e', 'd'},
        {'R', 'Y'}, {'Y', 'R'}, {'r', 'y'}, {'y', 'r'},
        {'P', 'O'}, {'O', 'P'}, {'p', 'o'}, {'o', 'p'},
        {'L', 'U'}, {'U', 'L'}, {'l', 'u'}, {'u', 'l'},
        {'K', 'I'}, {'I', 'K'}, {'k', 'i'}, {'i', 'k'}
    };
    std::string str = s;
    std::map<char, char>::iterator it;
    std::string::iterator it1 = str.begin(), it2 = str.begin();
    while (it1 < str.end()) {
        it = m.find(*it1);
        *it2 = it != m.end() ? it->second : *it1;
        it1++, it2++;
    }
    return str;
}
std::string encode(const std::string& str) {
    return transform(str);
}
std::string decode(const std::string& str) {
    return  transform(str);
}