#include <iostream>
#include "Pokemon.h"
using namespace std;

int main() {

    Pokemon charmander;
    charmander.catchPokemon("Charmander", "Fire", "Orange", 'M', 24.0, 18.7);
    cout << "Initial Print: " << endl;
    charmander.print();
    charmander.heightAdjustment(22.0);
    charmander.liposuction(18.0);
    charmander.sprayPaint("Red");
    cout << "After changes: " << endl;
    charmander.print();

    Pokemon squirtle;
    squirtle.catchPokemon("Squirtle", "Water", "Blue", 'M', 20.0, 19.8);
    cout << "Initial Print: " << endl;
    squirtle.print();
    squirtle.heightAdjustment(22.0);
    squirtle.liposuction(17.5);
    squirtle.sprayPaint("Turquoise");
    cout << "After changes: " << endl;
    squirtle.print();

    return 0;

}
