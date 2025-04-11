#include "BrickWall.hpp"

BrickWall::BrickWall()
: ATarget("Inconspicuous Red-brick Wall")
{}

ATarget *BrickWall::clone()
{
    BrickWall *_clone = new BrickWall;

    _clone->type = this->type;
    return _clone;
}
