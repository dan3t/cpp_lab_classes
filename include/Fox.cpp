#include "Fox.h"

Fox::Fox(float mass, char *sex, char *color, int age, char *name, TypeFox type, int numberRabbitsEaten) : Animal(mass, sex, color, age), name(nullptr), type(type), numberRabbitsEaten(numberRabbitsEaten) {
    SetName(name);
}

Fox::~Fox() {
    delete[] color;
    delete[] sex;
    delete[] name;
}

Fox &Fox::operator=(const Fox &object) {
    if (this == &object) return *this;
    mass = object.mass;
    age = object.age;
    type = object.type;
    numberRabbitsEaten = object.numberRabbitsEaten;
    SetSex(object.sex);
    SetColor(object.color);
    SetName(object.name);
    return *this;
}

Fox &Fox::operator=(Fox &&object) noexcept {
    if (this == &object) return *this;
    mass = object.mass;
    age = object.age;
    type = object.type;
    numberRabbitsEaten = object.numberRabbitsEaten;
    SetSex(object.sex);
    SetColor(object.color);
    SetName(object.name);
    object.mass = 0.0;
    object.sex = nullptr;
    object.color = nullptr;
    object.name = nullptr;
    object.age = 0;
    return *this;
}

void Fox::SetName(char *n) {
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Fox::Eat() {
    numberRabbitsEaten++;
}

void Fox::WhatDoesSay() const {
    if (type == RED_FOX) {
        std::cout << "Ring-ding-ding-ding-dingeringeding!" << std::endl;
    } else if (type == ARCTIC_FOX) {
        std::cout << "Gering-ding-ding-ding-dingeringeding!" << std::endl;
    } else if (type == FENNEC_FOX) {
        std::cout << "Wa-pa-pa-pa-pa-pa-pow!" << std::endl;
    } else if (type == GRAY_FOX) {
        std::cout << "Hatee-hatee-hatee-ho!" << std::endl;
    } else {
        std::cout << "Joff-tchoff-tchoffo-tchoffo-tchoff!" << std::endl;
    }
}
