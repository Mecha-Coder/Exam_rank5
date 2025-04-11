#ifndef BRICKWALL_HPP 
#define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp" 

using std::cout;
typedef std::string str;

class BrickWall : public ATarget {

public:
    BrickWall();

    ATarget *clone();
};

#endif