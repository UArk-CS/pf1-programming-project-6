//
// Created by Ben Worthington on 11/13/20.
//

#include <string>

class Pokemon {

private:
    std::string name;
    std::string type;
    std::string color;
    char gender;
    float weight;
    float height;

public:
    Pokemon();
    ~Pokemon();

    void catchPokemon(string n, string t, string c, char g, float w, float h);
    void heightAdjustment(float h);
    void liposuction(float w);
    void sprayPaint(char c);
    void print() const;

};


