#include <iostream>
#include <cstring>

class Animal {
protected:
    float mass;
    char* sex;
    char* color;
    int age;
public:
    Animal() = default;
    Animal(float mass, char* sex, char* color, int age);
    Animal(const Animal& object) = default;
    Animal(Animal&& object) noexcept = default;
    virtual ~Animal();

    float GetMass() const { return mass; }
    char* GetSex() const { return sex; }
    char* GetColor() const { return color; }
    int GetAge() const { return age; }

    void SetMass(float m) { mass = m; }
    void SetAge(int a) { age = a; }
    void SetSex(char* s);
    void SetColor(char* c);

    virtual void WhatDoesSay() const {}
};
