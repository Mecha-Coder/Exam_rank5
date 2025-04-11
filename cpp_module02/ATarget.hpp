#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell;

using std::cout;
typedef std::string str;

class ATarget {
protected:
    str type;

public:
    ATarget(const str &Type);
    virtual ~ATarget();

    const str &getType() const;
    void getHitBySpell(const ASpell &spell);

    virtual ATarget *clone() = 0;
};

#endif 
