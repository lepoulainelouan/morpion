#include <iostream>
#include "player.hpp"
#include "game.hpp"

int main(){
    char board[9]={'1','2','3','4','5','6','7','8','9'};
player p1=create_player();
player p2=create_player();

player current =p1;
int position;
bool victory=false;

for (int turn=0; turn<9; turn++){
    game_draw_board(board);
    std::cout<<current.name<<" A TOI DE JOUER ! ";
    std::cin >>position;

    if ( position<1|| position>9|| board[position -1  ]==p1.symbol|| board[position-1]==p2.symbol){
    std::cout<<"Impossible de placer ici gros nullos \n";
    turn--;
    continue;
    }
    board[position - 1]=current.symbol;
    current =(current.symbol==p1.symbol) ? p2 : p1;
}
game_draw_board(board);
return 0;
}
