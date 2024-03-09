#include "Animal.h"

Animal::Animal(float mass, char *sex, char *color, int age) :
mass(mass), sex(nullptr), color(nullptr), age(age) {
    SetSex(sex);
    SetColor(color);
}

Animal::~Animal() {
    delete[] color;
    delete[] sex;
}

void Animal::SetSex(char *s) {
    delete[] sex;
    sex = new char[strlen(s) + 1];
    strcpy(sex, s);
}

void Animal::SetColor(char *c) {
    delete[] color;
    color = new char[strlen(c) + 1];
    strcpy(color, c);
}