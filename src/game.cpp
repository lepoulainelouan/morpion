#include <iostream>
#include "game.hpp"

void game_draw_board(const char board[9]){
    for (int i=0; i<9; i++){
        std::cout<<" | "<< board[i];
        if (i%3==2) std::cout << " |\n";
    }
}

