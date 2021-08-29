#pragma once

#include <iostream>
#include "ISpell.h"

class StarSurgeSpell: public ISpell
{
public:
    StarSurgeSpell(const int inCost);

    virtual ~StarSurgeSpell() = default;
};
