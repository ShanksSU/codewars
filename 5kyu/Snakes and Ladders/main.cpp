/*
    https://www.codewars.com/kata/587136ba2eefcb92a9000027/cpp
*/
#include <map>
using namespace std;

map<int, int> mp = {
    {2, 38},
    {7, 14},
    {8, 31},
    {15, 26},
    {21, 42},
    {28, 84},
    {36, 44},
    {51, 67},
    {71, 91},
    {78, 98},
    {87, 94},
    {99, 80},
    {95, 75},
    {92, 88},
    {89, 68},
    {74, 53},
    {62, 19},
    {64, 60},
    {46, 25},
    {49, 11},
    {16, 6}
};

class SnakesLadders {
public:
    SnakesLadders() {
        player1_num = 0;
        player2_num = 0;
        p1_round = 1;
        p2_round = 0;
        isDouble = false;
        gv = false;
    };

    std::string play(int die1, int die2) {
        int move = die1 + die2;
        if (die1 == die2) isDouble = true; else isDouble = false;
        if (isDouble) {
            if (p1_round > 0) p1_round++;
            if (p2_round > 0) p2_round++;
        }
        if (gv) return "Game over!";
        if (p1_round) {
            p1_round--;
            if (p1_round == 0) p2_round++;
            player1_num += move;
            if (player1_num > 100) player1_num = 100 - abs(100 - player1_num);
            if (player1_num == 100) {
                gv = true;
                return "Player 1 Wins!";
            }
            if (mp[player1_num] != 0) player1_num = mp[player1_num];
            return "Player 1 is on square " + to_string(player1_num);
        }
        else {
            p2_round--;
            if (p2_round == 0) p1_round++;
            player2_num += move;
            if (player2_num > 100) player2_num = 100 - abs(100 - player2_num);
            if (player2_num == 100) {
                gv = true;
                return "Player 2 Wins!";
            }
            if (mp[player2_num] != 0) player2_num = mp[player2_num];
            return "Player 2 is on square " + to_string(player2_num);
        }
        return "";
    };
private:
    int player1_num;
    int player2_num;
    int p1_round;
    int p2_round;
    bool isDouble;
    bool gv;
};