#ifndef DUMMY_HPP 
#define DUMMY_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp" 

using std::cout;
typedef std::string str;

class Dummy : public ATarget {

public:
    Dummy();

    ATarget *clone();
};

#endif