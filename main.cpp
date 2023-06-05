#include "Game.h"
int main() {
    Field field(4);
    field.print();
    auto *p1 = new Player;
    auto *p2 = new Player;
    game(p1, p2, field);
    delete p1;
    delete p2;
    return 0;
}
