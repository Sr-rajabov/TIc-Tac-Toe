//
// Created by sorbo on 04.06.2023.
//

#include "Player.h"



Player::Player() {
    string Name_;
    cout << "Player " << id << " enter your name!\n";
    cin >> Name_;
    this->Name = Name_;
    if (id == 1) sign = 'X';
    else sign = 'O';
    id++;
}
Player::~Player() = default;

void Player::move(Field & field, bool check) {
    if (check) {
        size_t x, y;
        cout << Name << " your turn to move!\n";
        field.print();
        cin >> x >> y;
        if (field_check(x, y, field)) {
            field.setfield(x, y, sign);
            field.print();
        } else {
            cout << "Wrong coordinates, try again!\n";
            field.print();
            move(field, check = false);
        }
    }
    else {
        size_t x, y;
        cin >> x >> y;
        if (field_check(x, y, field)) {
            field.setfield(x, y, sign);
            field.print();
        }
        else {
            cout << "Wrong coordinates, try again!\n";
            field.print();
            move(field, check = false);
        }
    }

}

int Player::id = 1;

string Player::getname() const {return Name;}