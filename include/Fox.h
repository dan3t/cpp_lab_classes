#include "Dog.h"

enum TypeFox {
    RED_FOX,
    ARCTIC_FOX,
    FENNEC_FOX,
    GRAY_FOX,
    CORSAC_FOX
};

class Fox : public Animal {
private:
    char* name;
    TypeFox type;
    int numberRabbitsEaten;
public:
    Fox() = default;
    Fox(float mass, char* sex, char* color, int age, char* name, TypeFox type, int numberRabbitsEaten);
    Fox(const Fox& object) = default;
    Fox(Fox&& object) = default;

    ~Fox() override;

    Fox& operator=(const Fox& object);
    Fox& operator=(Fox&& object) noexcept;

    char* GetName() const { return name; }
    TypeFox GetType() const { return type; }
    int GetNumberRabbitsEaten() const { return numberRabbitsEaten; }

    void SetName(char* n);
    void SetType(TypeFox t) { type = t; }
    void SetNumberRabbitsEaten(int n) { numberRabbitsEaten = n; }

    void WhatDoesSay() const override;

    void Eat();
};
