#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp" 

using std::cout;
typedef std::string str;

class Fireball : public ASpell {

public:
    Fireball();

    ASpell *clone();
};

#endif
