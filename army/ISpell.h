#pragma once

#include <iostream>

enum SPELL
{
    StarSurge   = 123,
    Fireball    = 124,
    Freezeball  = 125
};

class ISpell
{
public:
    ISpell(SPELL inName, const int inCost);
    virtual ~ISpell() = default;

    const int getCost() const;

    void print() const;

protected:
    SPELL m_name;
    int m_cost;
};