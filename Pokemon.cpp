//
// Created by Ben Worthington on 11/13/20.
//

#include "Pokemon.h"
#include <iostream>

using namespace std;

Pokemon::Pokemon() {

    cout << endl;
    cout << "Constructor" << endl;
    name = "N/A";
    type = "N/A";
    color = "N/A";
    gender = 'N';
    weight = 0.0;
    height = 0.0;

}

Pokemon::~Pokemon() {

    cout << endl;
    cout << "Destructor" << endl;

}


void Pokemon::catchPokemon(std::string n, std::string t, std::string c, char g, float w, float h) {

    name = n;
    type = t;
    color = c;
    gender = g;
    weight = w;
    height = h;

}

void Pokemon::heightAdjustment(float h) {

    cout << endl;
    cout << "Height Adjustment" << endl;
    cout << "Old height: " << height << " in" << endl;
    height = h;
    cout << "New height: " << height << " in" << endl;

}

void Pokemon::liposuction(float w) {

    cout << endl;
    cout << "Weight Adjustment" << endl;
    cout << "Old weight: " << weight << " lbs" << endl;
    weight = w;
    cout << "New weight: " << weight << " lbs" << endl;

}

void Pokemon::sprayPaint(std::string c) {

    cout << endl;
    cout << "Spray Paint" << endl;
    cout << "Old color: " << color << endl;
    color = c;
    cout << "New color: " << color << endl;

}

void Pokemon::print() const {

    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Type: " << type << endl;
    cout << "Color: " << color << endl;
    cout << "Weight: " << weight << " in" << endl;
    cout << "Height: " << height << " lbs" << endl;

}