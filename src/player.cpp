#include <iostream>
#include "player.hpp"

player create_player(){
    player p;
    std::cout << "Rentre ton pseudo: ";
    std::cin >>p.name;
    std::cout <<"Choisis ton symbol (ex:x)";
    std::cin >>p.symbol;
    return p;
}