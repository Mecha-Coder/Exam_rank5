#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp" 

using std::cout;
typedef std::string str;

class SpellBook {
    SpellBook();
public:
    ~SpellBook();
    SpellBook(const SpellBook &otherBook);
    SpellBook &operator=(const SpellBook &otherBook);
};

#endif
