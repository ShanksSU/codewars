std::string string_expansion(const std::string& s) {
    int n = 1;
    std::string str;
    for (char c : s) {
        if (isdigit(c)) {
            n = c - '0';
        }
        else {
            str += std::string(n, c);
        }
    }
    return str;
}