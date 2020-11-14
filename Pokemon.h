//
// Created by Ben Worthington on 11/13/20.
//

#include <string>

class Pokemon {

private:
    std::string name;
    std::string gender;
    std::string type;
    float weight;
    float height;

public:
    Pokemon();
    ~Pokemon();

    void print() const;

};


