/*
    https://www.codewars.com/kata/576757b1df89ecf5bd00073b/cpp
*/
class Kata {
    public:
        std::vector<string> towerBuilder(int nFloors) {
            std::vector<std::string> ret;
            for (int i = 0; i < nFloors; i++) {
                ret.push_back( std::string(nFloors - i - 1, ' ') +
                               std::string((i * 2) + 1, '*') +
                               std::string(nFloors - i - 1, ' '));
            }
            return ret;
        }
};