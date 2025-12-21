#include <iostream>
#include <cstdlib>
#include <ctime>
#include "player.hpp"
#include "game.hpp"

int main(){
    char board[9]={'1','2','3','4','5','6','7','8','9'};
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout<<"Bienvenue dans le jeu du MORPION \n"
"Veuillez choisir un mode de jeu :\n"
"1. Deux joueurs \n"
"2. Un joueur contre l'IA \n";

    int mode;
    std::cin>>mode;
player p1=create_player();
player p2;

bool vs_ai = false;
if (mode==2){
    vs_ai=true;
    p2.name="R2D2";
    p2.symbol=(p1.symbol=='X')?'O':'X';
}else{
    p2=create_player();
}

player current =p1;
int position;
bool victory=false;

for (int turn=0; turn<9 &&!victory; turn++){
    draw_game_board(board);

    if (vs_ai && current.name=="R2D2"){
        do{
            position=std::rand()%9+1;
        }while (board[position-1]==p1.symbol || board[position-1]==p2.symbol);
        std::cout<<"R2D2 joue \n";
    }else{
    std::cout<<current.name<<" A TOI DE JOUER ! ";
    std::cin >>position;
    }
    if ( position<1|| position>9|| board[position -1  ]==p1.symbol|| board[position-1]==p2.symbol){
    std::cout<<"Impossible de placer ici gros nullos \n";
    turn--;
    continue;
    }

    board[position - 1]=current.symbol;

    if (check_victory(board, current.symbol)){
        draw_game_board(board);
        std::cout <<current.name<<" a GAGNE !!!";
        victory=true;
    }
    current =(current.symbol==p1.symbol) ? p2 : p1;
}

if (!victory){
    draw_game_board(board);
    std::cout<<"EGALITE !";
}
return 0;
}
