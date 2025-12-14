#include <iostream>
#include "player.hpp"
#include "game.hpp"

int main(){
    char board[9]={'1','2','3','4','4','6','7','8','9'};
player p1=create_player();
player p2=create_player();

game_draw_board(board);
return 0;
}
