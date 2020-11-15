//
// Created by Ben Worthington on 11/13/20.
//

#include "Pokemon.h"
#include <iostream>

using namespace std;

Pokemon::Pokemon() {

    cout << "Constructor" << endl;
    name = "N/A";
    gender = "N/A";
    type = "N/A";
    color = "N/A";
    weight = 0.0;
    height = 0.0;

}

Pokemon::~Pokemon() {

    cout << "Destructor" << endl;

}

void Pokemon::heightAdjustment(const float h) {

    height = h;

}

void Pokemon::liposuction(const float w) {

    weight = w;

}

void Pokemon::sprayPaint(const std::string c) {

    color = c;

}

void Pokemon::print() const {

    cout << "Print all attributes" << endl;

}