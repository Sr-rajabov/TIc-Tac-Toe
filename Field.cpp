//
// Created by sorbo on 04.06.2023.
//

#include "Field.h"

Field::Field(size_t size) : size(size), field(new char*[size]) {
    *(field) = new char[size * size];
    for (int i = 1; i != size; ++i) {
        *(field + i) = *(field + i - 1) + size;
    }
    for (int i = 1; i < size; ++i) {
        for (int j = 1; j < size; ++j) {
            *(*(field + i) + j) = '.';
        }
    }
    char count = '1';
    for (int i = 1; i < size; ++i, count++) {
        *(*(field + i)) = count;
        *(*(field) + i) = count;
    }
    *(*(field)) = ' ';
}
Field::~Field() {
    delete[] *(field);
    delete[] field;
}
size_t Field::getrows() const {return size;}
size_t Field::getcols() const {return size;}

void Field::print() const {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << setw(3) << *(*(field + i) + j);
        }
        cout << newline;
    }
}

char Field::getfield(size_t i, size_t j) const {return *(*(field + i) + j);}

void Field::setfield(size_t i, size_t j, char value) {
    *(*(field + i) + j) = value;
}

bool field_check(size_t x, size_t y, Field &field) {
    return x < field.getcols() && x > 0 && y < field.getrows() && y > 0
           && field.getfield(x, y) != 'X' && field.getfield(x, y) != 'O';
}
