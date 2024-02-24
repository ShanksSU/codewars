bool compareVersions(std::string version1, std::string version2) {
    std::stringstream ss1(version1), ss2(version2);
    int num1, num2;
    char dot;
    while (true) {
        ss1 >> num1 >> dot;
        ss2 >> num2 >> dot;
        if (num1 != num2) return num1 > num2;
        if (!ss1 && !ss2) break;
    }
    return true;
}