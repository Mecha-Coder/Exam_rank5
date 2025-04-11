#include "ATarget.hpp"
#include "ASpell.hpp"

const str &ATarget::getType() const
{return type;}

void ATarget::getHitBySpell(const ASpell &spell)
{cout << type << " has been " << spell.getEffects() << "!\n";}

ATarget::ATarget(const str &Type)
: type(Type)
{}

ATarget::~ATarget() {}
