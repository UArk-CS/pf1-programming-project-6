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

    void heightAdjustment(const float height);
    void liposuction(const float weight);
    void sprayPaint(const std::string color);
    void print() const;

};


