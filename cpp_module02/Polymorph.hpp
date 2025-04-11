#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp" 

using std::cout;
typedef std::string str;

class Polymorph : public ASpell {

public:
    Polymorph();

    ASpell *clone();
};

#endif
