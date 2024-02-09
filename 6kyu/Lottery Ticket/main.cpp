/*
    https://www.codewars.com/kata/57f625992f4d53c24200070e/cpp
*/
std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win) {
    int sum = 0;
    for (auto m : ticket) {
        for (auto i : m.first) {
            if ((int)i == m.second) {
                sum++;
                break;
            }
        }
    }
    return sum >= win ? "Winner!" : "Loser!";
}