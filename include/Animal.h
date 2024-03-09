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

    float getMass() const { return mass; }
    char* getSex() const { return sex; }
    char* getColor() const { return color; }
    int getAge() const { return age; }

    void SetMass(float m) { mass = m; }
    void SetAge(int a) { age = a; }
    void SetSex(char* s);
    void SetColor(char* c);

    virtual void WhatDoesSay() const {}
};
