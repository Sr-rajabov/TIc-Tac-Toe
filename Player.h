//
// Created by sorbo on 04.06.2023.
//

#ifndef TIC_TAC_TOE_PLAYER_H
#define TIC_TAC_TOE_PLAYER_H
#include "Field.h"

class Player {
public:
    Player();
    ~Player();
    void move(Field & field, bool check = true);
    [[nodiscard]] string getname() const;
private:
    string Name;
    static int id;
    char sign;
};


#endif //TIC_TAC_TOE_PLAYER_H
