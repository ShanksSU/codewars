/*
    https://www.codewars.com/kata/5bc7bb444be9774f100000c3/cpp
*/
#include <string>
#include <string_view>
#include <regex>

class VersionManager {
public:
    VersionManager(std::string_view version = "0.0.1");
    VersionManager& major();
    VersionManager& minor();
    VersionManager& patch();
    VersionManager& rollback();
    std::string release() const;
private:
    int major_num = 0, minor_num = 0, patch_num = 0;
    std::string str;
    std::vector<std::vector<int>> history;
};  

VersionManager::VersionManager(std::string_view version) {
    static const std::regex versionR{ R"(^(\d+)(?:\.(\d+)|$)(?:\.(\d+)|$))" };
    str = version.empty() ? "0.0.1" : version;
    std::smatch match;
    if (!std::regex_search(str.cbegin(), str.cend() - (str.back() == '.'), match, versionR)) {
        throw VersionException{ "Error occured while parsing version!" };
    }
    major_num = std::stoul(match.str(1));
    minor_num = match.length(2) ? std::stoul(match.str(2)) : 0;
    patch_num = match.length(3) ? std::stoul(match.str(3)) : 0;
}

VersionManager& VersionManager::major() {
    history.push_back({ major_num++, minor_num, patch_num });
    minor_num = 0;
    patch_num = 0;
    return *this;
}

VersionManager& VersionManager::minor() {
    history.push_back({ major_num, minor_num++, patch_num });
    patch_num = 0;
    return *this;
}

VersionManager& VersionManager::patch() {
    history.push_back({ major_num, minor_num, patch_num++ });
    return *this;
}

VersionManager& VersionManager::rollback() {
    if (history.size() == 0) throw VersionException("Cannot rollback!");
    major_num = history.back()[0];
    minor_num = history.back()[1];
    patch_num = history.back()[2];
  
    history.pop_back();
    return *this;
}

std::string VersionManager::release() const {
    std::stringstream ss;
    ss << major_num << '.' << minor_num << '.' << patch_num;
    return ss.str();
}