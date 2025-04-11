#include "ASpell.hpp"
#include "ATarget.hpp"

const str &ASpell::getName() const
{return name;}

const str &ASpell::getEffects() const
{return effects;}

ASpell::ASpell(const str &Name, const str &Effects)
: name(Name), effects(Effects)
{}

ASpell::~ASpell(){}

void ASpell::launch(ATarget &target)
{target.getHitBySpell(*this);}
