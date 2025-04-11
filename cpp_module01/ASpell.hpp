#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>


class ATarget;

using std::cout;
typedef std::string str;

class ASpell {
protected:
    str name;
    str effects;

public:
    ASpell(const str &Name, const str &Effects);
    virtual ~ASpell();

    const str &getName() const;
    const str &getEffects() const;

    virtual ASpell *clone() = 0;

    void launch(ATarget &target);
};

#endif 