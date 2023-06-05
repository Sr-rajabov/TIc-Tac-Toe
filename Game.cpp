//
// Created by sorbo on 04.06.2023.
//

#include "Game.h"
void game(Player *p1, Player *p2, Field &field) {
    if (winner_check(p1, p2, field) == 1) {
        cout << p1->getname() << " win!\n";
        return;
    }
    else if (winner_check(p1, p2, field) == 2) {
        cout << p2->getname() << " win!\n";
    }
    else if (draw_check(field) == 1) {
        cout << "draw!\n";
        return;
    }
    p1->move(field);
    if (winner_check(p1, p2, field) == 1) {
        cout << p1->getname() << " win!\n";
        return;
    }
    else if (winner_check(p1, p2, field) == 2) {
        cout << p2->getname() << " win!\n";
    }
    else if (draw_check(field) == 1) {
        cout << "draw!\n";
        return;
    }
    p2->move(field);
    game(p1, p2, field);
}

int winner_check(Player *p1, Player *p2, Field &field) {
    if (field.getfield(1, 1) == 'X' && field.getfield(1, 2) == 'X' && field.getfield(1, 3) == 'X'
        || field.getfield(2, 1) == 'X' && field.getfield(2, 2) == 'X' && field.getfield(2, 3) == 'X'
        || field.getfield(3, 1) == 'X' && field.getfield(3, 2) == 'X' && field.getfield(3, 3) == 'X'
        || field.getfield(1, 1) == 'X' && field.getfield(2, 1) == 'X' && field.getfield(3, 1) == 'X'
        || field.getfield(1, 2) == 'X' && field.getfield(2, 2) == 'X' && field.getfield(3, 2) == 'X'
        || field.getfield(1, 3) == 'X' && field.getfield(2, 3) == 'X' && field.getfield(3, 3) == 'X'
        || field.getfield(1,1) == 'X' && field.getfield(2, 2) == 'X' && field.getfield(3, 3) == 'X'
        || field.getfield(3,1) == 'X' && field.getfield(2,2) == 'X' && field.getfield(1, 3) == 'X') {
        return 1;
    }
    else if (field.getfield(1, 1) == 'O' && field.getfield(1, 2) == 'O' && field.getfield(1, 3) == 'O'
         || field.getfield(2, 1) == 'O' && field.getfield(2, 2) == 'O' && field.getfield(2, 3) == 'O'
         || field.getfield(3, 1) == 'O' && field.getfield(3, 2) == 'O' && field.getfield(3, 3) == 'O'
         || field.getfield(1, 1) == 'O' && field.getfield(2, 1) == 'O' && field.getfield(3, 1) == 'O'
         || field.getfield(1, 2) == 'O' && field.getfield(2, 2) == 'O' && field.getfield(3, 2) == 'O'
         || field.getfield(1, 3) == 'O' && field.getfield(2, 3) == 'O' && field.getfield(3, 3) == 'O'
         || field.getfield(1,1) == 'O' && field.getfield(2, 2) == 'O' && field.getfield(3, 3) == 'O'
         || field.getfield(3,1) == 'O' && field.getfield(2,2) == 'O' && field.getfield(1, 3) == 'O') {
        return 2;
    }
    return 3;
}

int draw_check(Field &field) {
    int count = 0;
    for (int i = 1; i < field.getcols(); ++i) {
        for (int j = 1; j < field.getrows(); ++j) {
            if (field.getfield(i, j) == '.') count++;
        }
    }
    return count;
}
