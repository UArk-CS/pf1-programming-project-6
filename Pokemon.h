//
// Created by Ben Worthington on 11/13/20.
//

#include <string>

class Pokemon {

private:
    std::string name;
    char gender;
    std::string type;
    std::string color;
    float weight;
    float height;

public:
    Pokemon();
    ~Pokemon();

    void heightAdjustment(float h);
    void liposuction(float w);
    void sprayPaint(char c);
    void print() const;

};


