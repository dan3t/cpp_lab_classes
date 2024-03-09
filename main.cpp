#include <iostream>
#include "include/Fox.h"

using namespace std;

void printFoxInfo(Fox &fox) {
    cout << "INFO:" << endl;
    cout << "| mass: " << fox.getMass() << endl;
    cout << "| sex: " << fox.getSex() << endl;
    cout << "| color: " << fox.getColor() << endl;
    cout << "| name: " << fox.GetName() << endl;
    cout << "| What does say: " << endl;
    fox.WhatDoesSay();
    cout << "| number of rabbits eaten: " << fox.GetNumberRabbitsEaten() << endl;;
}

int main() {
    Fox red_fox_bobik(13.5, "male", "red", 3, "bobik", RED_FOX, 4);
    printFoxInfo(red_fox_bobik);
    Fox red_fox_bobik_2 = red_fox_bobik;
    red_fox_bobik_2.Eat();
    red_fox_bobik_2.SetType(FENNEC_FOX);
    printFoxInfo(red_fox_bobik_2);
    return 0;
}
