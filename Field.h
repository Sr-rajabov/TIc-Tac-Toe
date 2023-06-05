//
// Created by sorbo on 04.06.2023.
//

#ifndef TIC_TAC_TOE_FIELD_H
#define TIC_TAC_TOE_FIELD_H
#define newline '\n'
#include "iostream"
using namespace std;
#include "iomanip"

class Field {
public:
    explicit Field(size_t size);
    ~Field();
    void print() const;
    [[nodiscard]] size_t getcols() const;
    [[nodiscard]] size_t getrows() const;
    [[nodiscard]] char getfield(size_t i, size_t j) const;
    void setfield(size_t i, size_t j, char value);
private:
    size_t size;
    char **field;
};

bool field_check(size_t x, size_t y, Field &field);

#endif //TIC_TAC_TOE_FIELD_H
