#include "Animal.h"

enum Breed {
    LABRADOR_RETRIVIER,
    GOLDEN_RETRIVIER,
    GERMAN_SHEPHERD,
    BULLDOG,
    BEAGLE,
    POODLE,
    BOXER,
    DACHSHUND,
    SIBERIAN_HUSKY,
    CHIHUAHUA
};

class Dog : public Animal {
private:
    char* name;
    Breed race;
public:
    Dog() = default;
    Dog(float mass, char* sex, char* color, int age, char* name, Breed race);
    Dog(const Dog& object) = default;
    Dog(Dog&& object) noexcept = default;

    ~Dog() override;

    Dog& operator=(const Dog& object);
    Dog& operator=(Dog&& object) noexcept;

    char* GetName() const { return name; }
    Breed GetRace() const { return race; }

    void SetName(char* n);
    void SetRace(Breed r) { race = r; }

    void WhatDoesSay() const override;
};

