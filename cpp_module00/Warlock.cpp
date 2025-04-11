#include "Warlock.hpp"

const str &Warlock::getName() const
{return name;}

const str &Warlock::getTitle() const
{return title;}

void Warlock::setTitle(const str Title)
{title = Title;}

Warlock::Warlock(str Name, str Title)
: name(Name), title(Title)
{cout << name << ": This looks like another boring day.\n";}

Warlock::~Warlock()
{cout << name << ": My job here is done!\n";}

Warlock::Warlock(){}
Warlock::Warlock(const Warlock &copy){(void)copy;}
Warlock &Warlock::operator=(const Warlock &copy)
{(void)copy; return *this;}

void Warlock::introduce() const
{cout << name << ": I am " << name << ", " << title << "!\n";}
