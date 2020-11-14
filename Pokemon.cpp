//
// Created by Ben Worthington on 11/13/20.
//

#include "Pokemon.h"
#include <iostream>

using namespace std;

Pokemon::Pokemon() {

    cout << "Constructor" << endl;

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