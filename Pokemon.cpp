//
// Created by Ben Worthington on 11/13/20.
//

#include "Pokemon.h"
#include <iostream>

using namespace std;

Pokemon::Pokemon() {

    cout << "Constructor" << endl;
    name = "N/A";
    type = "N/A";
    color = "N/A";
    gender = 'N';
    weight = 0.0;
    height = 0.0;

}

Pokemon::~Pokemon() {

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

    height = h;

}

void Pokemon::liposuction(float w) {

    weight = w;

}

void Pokemon::sprayPaint(char c) {

    color = c;

}

void Pokemon::print() const {

    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Type: " << type << endl;
    cout << "Color: " << color << endl;
    cout << "Weight: " << weight << endl;
    cout << "Height: " << height << endl;

}