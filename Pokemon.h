//
// Created by Ben Worthington on 11/13/20.
//

#include <string>

class Pokemon {

private:
    std::string name;
    std::string gender;
    std::string type;
    std::string color;
    float weight;
    float height;

public:
    Pokemon();
    ~Pokemon();

    void heightAdjustment(const float h);
    void liposuction(const float w);
    void sprayPaint(const std::string c);
    void print() const;

};


