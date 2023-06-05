//
// Created by sorbo on 04.06.2023.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H
#include "Player.h"

void game(Player *p1, Player *p2, Field &field);

int winner_check(Player *p1, Player *p2, Field &field);

int draw_check(Field &field);

#endif //TIC_TAC_TOE_GAME_H
