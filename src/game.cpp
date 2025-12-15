#include <iostream>
#include "game.hpp"

void draw_game_board(const char board[9]){
    for (int i=0; i<9; i++){
        std::cout<<" | "<< board[i];
        if (i%3==2) std::cout << " |\n";
    }
}

bool check_victory(const char board[9],char symbol){
    int win_if[8][3]= {
        {0,1,2}, {3,4,5}, {6,7,8},{0,3,6}, {1,4,7}, {2,5,8},{0,4,8}, {2,4,6}
    };

    for (int i=0; i<8;i++){
        if (board[win_if[i][0]]== symbol && board[win_if[i][1]]== symbol && board[win_if[i][2]]== symbol){
            return true;
        }
    }
    return false;
}
