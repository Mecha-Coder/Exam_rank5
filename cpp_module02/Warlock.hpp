#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

using std::cout;
typedef std::string str;

class Warlock {
    str name;
    str title;
    std::vector<ASpell *> spellBook;

    Warlock();
    Warlock(const Warlock &copy);
    Warlock &operator=(const Warlock &copy);
public:
    Warlock(str Name, str Title);
    ~Warlock();

    const str &getName() const;
    const str &getTitle() const; 
    void setTitle(const str Title);

    void introduce() const;
    
    void learnSpell (ASpell *spell);
    void forgetSpell (str spellName);
    void launchSpell (str spellName, ATarget &target);

};


#endif