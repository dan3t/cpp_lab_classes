#include "Dog.h"

Dog::Dog(float mass, char *sex, char *color, int age, char *name, Breed race) : Animal(mass, sex, color, age), name(nullptr), race(race) {
    SetName(name);
}

Dog::~Dog() {
    delete[] sex;
    delete[] color;
    delete[] name;
}

void Dog::SetName(char *n) {
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

Dog &Dog::operator=(const Dog &object) {
    if (this == &object) return *this;
    mass = object.mass;
    age = object.age;
    race = object.race;
    SetName(object.name);
    SetSex(object.sex);
    SetColor(object.color);
    return *this;
}

Dog &Dog::operator=(Dog &&object) noexcept {
    if (this == &object) return *this;
    mass = object.mass;
    age = object.age;
    race = object.race;
    SetName(object.name);
    SetSex(object.sex);
    SetColor(object.color);
    object.mass = 0.0;
    object.sex = nullptr;
    object.color = nullptr;
    object.name = nullptr;
    object.age = 0;
    return *this;
}

void Dog::WhatDoesSay() const {
    std::cout << "Woof!" << std::endl;
}
