#include <iostream>
#pragma once

void draw_game_board(const char board[9]);
bool check_victory(const char board[9], char symbol);
int ia(const char board[9], char ai_symbol, char p_symbol);