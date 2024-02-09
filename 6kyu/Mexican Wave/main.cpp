/*
    https://www.codewars.com/kata/58f5c63f1e26ecda7e000029/cpp
*/
std::vector<std::string> wave(std::string y) {
    std::vector<std::string> ref = {};
    for (char& c : y) {
        if (!isalpha(c)) continue;
        c = toupper(c);
        ref.push_back(y);
        c = tolower(c);
    }
    return ref;
}