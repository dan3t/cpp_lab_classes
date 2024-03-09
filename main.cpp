#include <iostream>
#include "include/Fox.h"

using namespace std;

void printFoxInfo(Fox &fox) {
    cout << "FOX INFO:" << endl;
    cout << "| mass: " << fox.GetMass() << endl;
    cout << "| sex: " << fox.GetSex() << endl;
    cout << "| color: " << fox.GetColor() << endl;
    cout << "| age: " << fox.GetAge() << endl;
    cout << "| name: " << fox.GetName() << endl;
    cout << "| What does say: " << endl;
    fox.WhatDoesSay();
    cout << "| number of rabbits eaten: " << fox.GetNumberRabbitsEaten() << endl;;
}
void printDogInfo(Dog &dog) {
    cout << "DOG INFO:" << endl;
    cout << "| mass: " << dog.GetMass() << endl;
    cout << "| sex: " << dog.GetSex() << endl;
    cout << "| color: " << dog.GetColor() << endl;
    cout << "| age: " << dog.GetAge() << endl;
    cout << "| name: " << dog.GetName() << endl;
    cout << "| What does say: " << endl;
    dog.WhatDoesSay();
}

int main() {
    Fox red_fox_bobik(13.5, "male", "red", 3, "bobik", RED_FOX, 4);
    printFoxInfo(red_fox_bobik);
    Fox red_fox_bobik_2 = red_fox_bobik;
    red_fox_bobik_2.Eat();
    red_fox_bobik_2.SetType(FENNEC_FOX);
    printFoxInfo(red_fox_bobik_2);
    Dog bulldog(19.4, "female", "black", 5, "bebrik", BULLDOG);
    bulldog.SetSex("male");
    printDogInfo(bulldog);
    return 0;
}
